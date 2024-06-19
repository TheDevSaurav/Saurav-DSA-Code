#include<iostream>
#include<unordered_map>
#include<stack>
#include<vector>
#include<limits.h>
#include<list>
using namespace std;

// class Graph{
//     public:
//     unordered_map<int,list<pair<int,int> > > adjList;
//     void addEdge(int u,int v, int wt, bool direction){
//         //direction ==0 ->undirected
//         //diection == 1 -> directed
//         if(direction==1){
//             adjList[u].push_back(make_pair(v,wt));
//         }
//         else{
//             //direction ==0;
//             //u--v
//             //u->v
//             //v->u
//             adjList[u].push_back({v,wt});
//             adjList[v].push_back({u,wt});
//         }
//         printAdjList();
//         cout<<endl;
//     }

//     void printAdjList(){
//         for(auto i : adjList){
//             cout<<i.first<<" : {";
//             for(auto  j : i.second){
//                 cout<<"{"<<j.first<<","<<j.second<<"}";
//             }
//             cout<<"}"<<endl;
//         }
//     }

//     // void bellmanFord(int n,char src){
//     //     //initial state
//     //     vector<int>dist(n,INT_MAX);
//     //     dist[src-'A']=0;

//     //     //N-1 times -> relaxation
//     //     for(int i=1;i<n;i++){
//     //         //traverse on entire edge list
//     //         for(auto a: adjList){
//     //             for(auto b: a.second){
//     //                 char u = a.first;
//     //                 char v= b.first;
//     //                 int wt= b.second;
//     //                 if( dist[u-'A'] != INT_MAX && dist[u-'A'] + wt < dist[v-'A']){
//     //                     dist[v-'A']=dist[u-'A']+wt;
//     //                 }
//     //             }
//     //         }
//     //     }
//     //     //yha tak shortest distance present hai
//     //     //check for -ve cycle
//     //     //1 time relaxtion more
//     //     bool anyUpdate = false;
//     //      for(auto a: adjList){
//     //             for(auto b: a.second){
//     //                 char u = a.first;
//     //                 char v= b.first;
//     //                 int wt= b.second;
//     //                 if( dist[u-'A'] != INT_MAX && dist[u-'A'] + wt < dist[v-'A']){
//     //                     anyUpdate=true;
//     //                     break;
//     //                     dist[v-'A']=dist[u-'A']+wt;
//     //                 }
//     //             }
//     //         }
//     //         if(anyUpdate==true){
//     //             cout<<"negative cycle present"<<endl;
//     //         }
//     //         else{
//     //             cout<<"no negative cycle"<<endl;
//     //             cout<<"printing distance array : ";
//     //             for(auto i:dist){
//     //                 cout<<i<<" ";
//     //             }
//     //             cout<<endl;
//     //         }
//     // }



//     void floydWarshal(int n){
//         //initial state
//         vector<vector<int>>dist(n,vector<int>(n,1e9));
//         //diagonal pr 0 set kro
//         for(int i=0;i<n;i++){
//             dist[i][i]=0;
//         }

//         //kuch weights graph ke andr bhi given hai
//         //update dist array acc
//         for(auto a:adjList){
//             for(auto b:a.second){
//                 int u = a.first;
//                 int v = b.first;
//                 int wt = b.second;

//                 dist[u][v]=wt;
//             }
//         } 

//         //main logic is here
//         for(int helper = 0; helper < n;helper++){
//             for(int src =0;src<n;src++){
//                 for(int dest =0; dest<n;dest++){
//                     dist[src][dest]=min(dist[src][dest],dist[src][helper]+ dist[helper][dest]);
//                 }
//             }
//         }
//         //printing dist array
//         for(int i=0;i<n;i++){
//             for(int j=0;j<n;j++){
//                 cout<<dist[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }

// };
// int main(){
//     Graph g;
// //     g.addEdge('A','B',-1,1);
// //     g.addEdge('B','E',2,1);
// //     g.addEdge('E','D',-3,1);
// //     g.addEdge('D','C',5,1);
// //     g.addEdge('A','C',4,1);
// //     g.addEdge('B','C',3,1);
// //     g.addEdge('B','D',2,1);
// //     g.addEdge('D','B',1,1);

// // g.printAdjList();
// // g.bellmanFord(5,'A');



// //floyd warshsl
// g.addEdge(0,1,3,1); 
// g.addEdge(1,0,2,1); 
// g.addEdge(0,3,5,1); 
// g.addEdge(1,3,4,1); 
// g.addEdge(3,2,2,1); 
// g.addEdge(2,1,1,1); 
// g.floydWarshal(4);
//     return 0; 
// }

















//kosaraju algo
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

    void dfs1(int node,stack<int>&ordering,unordered_map<int,bool>&vis){
        vis[node]=true;
        for(auto nbr:adjList[node]){
            if(!vis[nbr]){
                dfs1(nbr,ordering,vis);
            }
        }
        //wapas aate hue stack mai push kr dena
        ordering.push(node);
    }
    void dfs2(int src, unordered_map<int,bool>& vis2,unordered_map<int,list<int>>&adjNew){
        vis2[src]=true;
        cout<<src<<": ";
        for(auto nbr:adjNew[src]){
            if(!vis2[nbr]){
                dfs2(nbr,vis2,adjNew);
            }
        }
    }

    int getStronglyConnectedComponent(int n){
        //step 1 set ordering
        stack<int>ordering;
        unordered_map<int,bool>vis;;

        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs1(i,ordering,vis);
            }
        }
        //step 2 reverse all the edges
        unordered_map<int,list<int>>adjNew;
        for(auto a: adjList){
            for(auto b:a.second){
                int u=a.first;
                int v = b;
                //v->u li entry create krni hai
                adjNew[v].push_back(u);
            }
        }
        //step 3 traverse using ordering and count component
        int count =0;
        unordered_map<int,bool>vis2;

        while(!ordering.empty()){
            int node = ordering.top();
            ordering.pop();
            if(!vis2[node]){
                cout<<"ssc no : "<<count+1<<" | ";
                dfs2(node,vis2,adjNew);
                count++;
                cout<<endl;
            }
        }

        return count;
    }


};

int main(){
    Graph g;
    g.addEdges(0,1,1);
    g.addEdges(1,2,1);
    g.addEdges(2,3,1);
    g.addEdges(3,0,1);

    g.addEdges(2,4,1);

    g.addEdges(4,5,1);
    g.addEdges(5,6,1);
    g.addEdges(6,4,1);

    g.addEdges(6,7,1);

    int n =8;
   int ans =  g.getStronglyConnectedComponent(8);
   cout<<"Scc count"<<ans<<endl;


    

    return 0;
}

