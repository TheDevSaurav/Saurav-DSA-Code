#include<iostream>
#include<unordered_map>
#include<list>
#include<map>
#include<stack>
#include<queue>
#include<algorithm>
using namespace std;

class Graph{
    public:
    unordered_map<int,list<int>> adjList;
    void addEdge(int u,int v,bool direction){
        if(direction==1){
            adjList[u].push_back(v);
        }
        else{
            adjList[u].push_back(v);
            adjList[v].push_back(u);
        }
    }
     void printAdjList(){
        for(auto nbr:adjList){
            cout<<nbr.first<<" : {";
            for(auto nbrdata:nbr.second){
                cout<<nbrdata<<",";
            }
            cout<<"}"<<endl;
        }
     }

     //topological sort using dfs
     void topoSortDfs(int src,map<int,bool>&visited,stack<int>&st){
        visited[src]=true;

        for(auto nbr:adjList[src]){
            if(!visited[nbr]){
                topoSortDfs(nbr,visited,st);
            }
        }
        st.push(src);
     }

     //topolpgical sort using bfs
     void topoSortBfs(int n,vector<int>&topoOrder){
        queue<int>q;
        map<int,int>indegree;

        //initliase krdi indegree subki
        for(auto i:adjList){
            for(auto nbr : i.second){
                indegree[nbr]++;
            }
        }
        //push all 0 indgree wali node into queue
        for(int node =0;node<n;node++){
            if(indegree[node]==0){
                q.push(node);
            }
        }
        //bfs chalate hai
        while(!q.empty()){
            int frontNode = q.front();
            q.pop();
            topoOrder.push_back(frontNode);

            for(auto nbr: adjList[frontNode]){
                indegree[nbr]--;
                //check for zero
                if(indegree[nbr]==0){
                    q.push(nbr);
                }
            }
        }
     }





     void shortestPathBfs(int src,int dest){
        queue<int>q;
        map<int,bool>visited;
        map<int,int>parent;

        //initial state
        q.push(src);
        visited[src]=true;
        parent[src]=-1;

        while(!q.empty()){
            int frontNode = q.front();
            q.pop();

            for(auto nbr : adjList[frontNode]){
                if(!visited[nbr]){
                    q.push(nbr);
                    parent[nbr]=frontNode;
                    visited[nbr]=true;                }
            }
        }

        //parent array teyar hoga
        vector<int>ans;
        while(dest != -1){
            ans.push_back(dest);
            dest = parent[dest];
        }
        reverse(ans.
        begin(),ans.end());
        ///printing yhe shortest path
        for(auto i:ans){
            cout<<i<<" ";
        }
     }
}; 
int main(){
    Graph g;
    g.addEdge(0,5,0);
    g.addEdge(5,4,0);
    g.addEdge(4,3,0);
    g.addEdge(0,6,0);
    g.addEdge(6,3,0);
    g.addEdge(0,1,0);
    g.addEdge(1,2,0);
    g.addEdge(2,3,0);

    g.printAdjList();

    // int n =8;
    // map<int,bool> visited;
    // stack<int> st;
    // for(int node=0;node<n;node++){
    //     if(!visited[node]){
    //         g.topoSortDfs(node,visited,st);
    //     }
    // }
    // cout<<"printing ht topo order"<<endl;
    // while(!st.empty()){
    //     cout<<st.top();
    //     st.pop();
    // }


    // //bfs topo
    // int n =8;
    // vector<int>topoOrder;
    // g.topoSortBfs(n,topoOrder);
    // cout<<"printing the topo sort order"<<endl;
    // for(auto i:topoOrder){
    //     cout<<i<<endl;
    // }

    // if(topoOrder.size()==n){
    //     cout<<"no cycle present"<<endl;
    // }
    // else{
    //     cout<<"cycle present"<<endl;
    // }


    //shortest paath bfs

    int src =0;
    int dest = 3;
    g.shortestPathBfs(src,dest);
}
