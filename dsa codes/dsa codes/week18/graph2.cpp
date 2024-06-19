#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;

class Graph {
    public:
    unordered_map<int,list<int> > adjList;
    void addEdges(int u, int v ,bool direction){
        //direction -> 0 -> undirected
        //direction -> 1 -> directed
        if(direction==1){
            //u se v li trf ek edge hai
            //u->v
            adjList[u].push_back(v);
        }
        else{
            //direction =0;
            //u -- v 
            //u->v 
            adjList[u].push_back(v);
            //v->u
            adjList[v].push_back(u);
        }

        cout<<endl<<"printing adjList"<<endl;
        printAdjList();
        cout<<endl;
    }

    void printAdjList(){
        for(auto i : adjList){
            cout<<i.first<<"-> {";
            for(auto neighbour: i.second){
                cout<<neighbour<<",";
            }
            cout<<"}"<<endl;
        }
    }

    bool checkCyclicUndirectedBFS(int src){
        queue<int>q;
        unordered_map<int,bool>visited;
        unordered_map<int,int>parent;
        //initial state
        q.push(src);
        visited[src]=true;
        parent[src]=-1;


        while(!q.empty()){
            int frontNode = q.front();
            q.pop();

            for(auto nbr:adjList[frontNode]){
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr]=true;
                    parent[nbr]=frontNode;
                }
                else if(visited[nbr]==true && nbr != parent[ frontNode]){
                    //agr node phle se visited hai to
                    //iska mtlb ye check krlo jo node isko visted krne ki koshish kr rhi hai
                    //agr wo iski parent node ha to badiya hai
                    //agr parent node nhi ha to cycle present hai
                    return true; 
                }
            }
        }
        //cycle not present 
        return false; 
    }
};

int main(){
    Graph g;
    g.addEdges(0,1,0);
    g.addEdges(1,2,0);
    
    g.addEdges(2,4,0);
    g.addEdges(3,4,0);
    g.addEdges(2,5,0);
    int src =0;
    bool isCyclic = g.checkCyclicUndirectedBFS(0);
    if(isCyclic){
        cout<<" cycle present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
    
    return 0;
}








//gfg cycle detction using bfs
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public: 
  
    bool solve(int src,unordered_map<int,bool>&visited,vector<int> adj[]){
        queue<int>q;
        
        unordered_map<int,int>parent;
        //initial state
        q.push(src);
        visited[src]=true;
        parent[src]=-1;


        while(!q.empty()){
            int frontNode = q.front();
            q.pop();

            for(auto nbr:adj[frontNode]){
                if(nbr == parent[frontNode]){
                    continue; //condition yaha laga di buss 
                }
                if(!visited[nbr]){
                    q.push(nbr);
                    visited[nbr]=true;
                    parent[nbr]=frontNode;
                }
                else if(visited[nbr]==true){
                    //agr node phle se visited hai to
                    //iska mtlb ye check krlo jo node isko visted krne ki koshish kr rhi hai
                    //agr wo iski parent node ha to badiya hai
                    //agr parent node nhi ha to cycle present hai
                    return true; 
                }
            }
        }
        //cycle not present 
        return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        unordered_map<int,bool>visited;
        for(int i=0;i<V;i++){
             if(!visited[i]){
                 bool ans = solve(i,visited,adj);
                 if(ans==true){
                     return true;
                 }
             }
        }
        return false; 
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends








//gfg undirected graph using dfs
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool checkCycleDFS(int src,unordered_map<int,bool>&vis,int parent, vector<int> adj[]){
        vis[src]=true;
        
        for(auto nbr:adj[src]){
            if(nbr==parent){
                continue;
            }
            if(!vis[nbr]){
            bool ans = checkCycleDFS(nbr,vis,src,adj);
            if(ans == true){
                return true;
            }
            }
            else if(vis[nbr]==true){
                return true;
            }
                
            
        }
        return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        unordered_map<int,bool>vis;
        for(int i =0;i<V;i++){
            if(!vis[i]){
                int parent = -1;
                bool isCyclic = checkCycleDFS(i,vis,parent,adj);
                if(isCyclic == true){
                    return true;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends











///directed graph DFS

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    bool checkCyclicDfs(int src,unordered_map<int,bool>&vis,unordered_map<int,bool>&dfsTrack
    ,vector<int> adj[]){
        vis[src]=true;
        dfsTrack[src]=true;
        
        for(auto nbr:adj[src]){
            if(!vis[nbr]){
                bool ans = checkCyclicDfs(nbr,vis,dfsTrack,adj);
                if(ans == true){
                    return true;
                }
            }
            if(vis[nbr]==true && dfsTrack[nbr]==true){
                return true;
            }
        }
        
        
        //backtrack yaha glti krunga
        dfsTrack[src]=false;
        return false;
        }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        unordered_map<int,bool>vis;
        unordered_map<int,bool>dfsTrack;
        
        for(int node=0;node<V;node++){
            if(!vis[node]){
                bool isCyclic= checkCyclicDfs(node , vis,dfsTrack,adj);
                if(isCyclic){
                    return true;
                }
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends