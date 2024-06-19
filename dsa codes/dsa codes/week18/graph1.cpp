#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
using namespace std;

// class Graph {
//     public:
//     unordered_map<int,list<int> > adjList;
//     void addEdges(int u, int v ,bool direction){
//         //direction -> 0 -> undirected
//         //direction -> 1 -> directed
//         if(direction==1){
//             //u se v li trf ek edge hai
//             //u->v
//             adjList[u].push_back(v);
//         }
//         else{
//             //direction =0;
//             //u -- v 
//             //u->v 
//             adjList[u].push_back(v);
//             //v->u
//             adjList[v].push_back(u);
//         }

//         cout<<endl<<"printing adjList"<<endl;
//         printAdjList();
//         cout<<endl;
//     }

//     void printAdjList(){
//         for(auto i : adjList){
//             cout<<i.first<<"-> {";
//             for(auto neighbour: i.second){
//                 cout<<neighbour<<",";
//             }
//             cout<<"}"<<endl;
//         }
//     }
// };

// int main(){
//     Graph g;
//     g.addEdges(0,1,1);
//     g.addEdges(1,2,1);
//     g.addEdges(1,3,1);
//     g.addEdges(2,3,1);
//     return 0;
// }








// //weighted graph

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
//             for(pair<int,int> p : i.second){
//                 cout<<"{"<<p.first<<","<<p.second<<"}";
//             }
//             cout<<"}"<<endl;
//         }
//     }

// };
// int main(){
//     Graph g;
//     g.addEdge(0,1,5,1);
//     g.addEdge(1,2,10,1);
//     g.addEdge(1,3,20,1);
//     g.addEdge(2,3,50,0);
//     return 0; 
// }

// if we want to use the same code for char we can use template for

template<typename T>
class Graph{
    public:
    unordered_map<T,list<pair<T,int> > > adjList;
    void addEdge(T u,T v, int wt, bool direction){
        //direction ==0 ->undirected
        //diection == 1 -> directed
        if(direction==1){
            adjList[u].push_back(make_pair(v,wt));
        }
        else{
            //direction ==0;
            //u--v
            //u->v
            //v->u
            adjList[u].push_back({v,wt});
            adjList[v].push_back({u,wt});
        }
        cout<<"printing edge"<<endl;
        printAdjList();
        cout<<endl;
    }

    void printAdjList(){
        for(auto i : adjList){
            cout<<i.first<<" : {";
            for(pair<T,int> p : i.second){
                cout<<"{"<<p.first<<","<<p.second<<"}";
            }
            cout<<"}"<<endl;
        }
    }
    


    //BFS traversal
    void BFSTraversal(T src,unordered_map<T,bool>&vis){
        //adjList already data member mai hai
        //visited
        // unordered_map<T,bool>vis;
        //queue
        queue<T>q;
        //initial state
        q.push(src);
        vis[src]=true;

        while(!q.empty()){
            T frontNode = q.front();
            cout<<frontNode<<" ";
            q.pop();

            //go to nbr
            for(auto nbr: adjList[frontNode]){
                T nbrData = nbr.first;

                if(!vis[nbrData]){
                    q.push(nbrData);
                    vis[nbrData]=true; 
                }
            }
        }

    }


    //Dfs traversal
    void DFSTraversal(T src,unordered_map<T,bool>& vis){
        vis[src] = true;
        cout<<src<<" ";

        for(auto nbr:adjList[src]){
            T nbrData = nbr.first;
            if(!vis[nbrData]){
                DFSTraversal(nbrData,vis);
            }
        }
    }



};
int main(){
    Graph<char> g;
    g.addEdge('a','b',5,0);
    g.addEdge('b','c',10,0);
    g.addEdge('b','c',20,0);
    g.addEdge('c','d',50,0);
    g.addEdge('c','e',50,0);
    g.addEdge('e','f',50,0);

    // g.BFSTraversal('a');

    //for  dis-conected graph
    // unordered_map<char,bool>vis;
    // for(char node='a'; node<='f';node++){
    //     if(!vis[node]){
    //         g.BFSTraversal(node,vis);
    //     }
    // }


    //dfs
    // unordered_map<char,bool>vis;
    // g.DFSTraversal('a',vis);

    // for  dis-conected graph
    unordered_map<char,bool>vis;
    for(char node='a'; node<='f';node++){
        if(!vis[node]){
            g.DFSTraversal(node,vis);
        }
    }

    
    return 0; 
}