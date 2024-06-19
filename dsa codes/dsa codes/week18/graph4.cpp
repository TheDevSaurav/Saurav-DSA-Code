#include<iostream>
#include<unordered_map>
#include<vector>
#include<limits.h>
#include<list>
#include<stack>
#include<set>
using namespace std;

class graph{
    public:
    unordered_map<int,list<pair<int,int>>>adj;

    void addEdge(int u , int v, int wt,bool direction){
        if(direction==1){
            adj[u].push_back({v,wt});
        }
        else {
            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }
    }

    void printAdjList(){
        for(auto i:adj){
            cout<<i.first<<" : {";
            for(auto j:i.second){
                cout<<"("<<j.first<<","<<j.second<<"),";
            }
            cout<<"}"<<endl;
        }
    }


    void topoOrderDfs(int src,stack<int> &topoOrder,unordered_map<int,bool>&visited){
        visited[src]=true;

        for(auto nbrPair : adj[src]){
            int nbrNode = nbrPair.first;
            // int nbrDist = nbrPair.second;
            if(!visited[nbrNode]){
                topoOrderDfs(nbrNode,topoOrder,visited);
            }
        }
        topoOrder.push(src);
    }


    void shortestPathDfs(stack<int>&topoOrder,int n){
        vector<int>dist(n,INT_MAX);
        //initially,maintian src 
        int src = topoOrder.top();
        topoOrder.pop();
        dist[src]=0;
    
    //update neighbour dist for this source node
    for(auto nbrPair : adj[src]){
        int nbrNode = nbrPair.first;
        int nbrDist = nbrPair.second;
        if(dist[src] + nbrDist < dist[nbrNode]){
            dist[nbrNode]= dist[src]+nbrDist;
        }
    }
    //apply the same above concept for all the remaining node
    //in th topo ordering
    while(!topoOrder.empty()){
        int src = topoOrder.top();
        topoOrder.pop();
     
      for(auto nbrPair : adj[src]){
        int nbrNode = nbrPair.first;
        int nbrDist = nbrPair.second;
        if(dist[src] + nbrDist < dist[nbrNode]){
            dist[nbrNode]= dist[src]+nbrDist;
        }
      }
    }
    
    //ab mera distance array ek dum teyar hai
    cout<<"printing the distace array"<<endl;
        for(auto i: dist){
            cout<<i<<" ";
        }
   

    }





    //dijkstra algorithm

    void dijkstraShortestDistance(int n ,int src,int dest){
        vector<int>dist(n+1,INT_MAX);
        set<pair<int,int>>st;

        //initial state ->(0,src)
        st.insert({0,src});
        dist[src]=0;

        //dist updation logic
        while(!st.empty()){
            auto topElement=st.begin();
            pair<int,int> topPair=*topElement;
            int topDist = topPair.first;
            int topNode = topPair.second;
            //remove the topNode
            st.erase(st.begin());

            //update the distance of neighbour
            for(pair<int,int> nbrPair:adj[topNode]){
                int nbrNode = nbrPair.first;
                int nbrDist = nbrPair.second;
                if(topDist + nbrDist < dist[nbrNode]){
                    //found a new shorter distance
                    //now update 
                    // ->set ki entry
                    auto previousEntry = st.find({dist[nbrNode],nbrNode});
                    if(previousEntry != st.end()){
                        //entry presnt hai
                        st.erase(previousEntry);
                    }
                    //dist ka array
                    dist[nbrNode]= topDist + nbrDist;
                    //create the new entry in the set of new distance
                    st.insert({dist[nbrNode],nbrNode});
                }
            }
            
        }
            cout<<"shortest distance from "<<src<<"node to "<<dest<<"Node : "<<dist[dest]<<endl;

    }


};
int main() {
    graph g;

    // g.addEdge(0,1,5,1);
    // g.addEdge(0,2,3,1);
    // g.addEdge(2,1,2,1);
    // g.addEdge(1,3,3,1);
    // g.addEdge(2,3,5,1);
    // g.addEdge(2,4,6,1);
    // g.addEdge(4,3,1,1);
    
    // g.printAdjList();

    // int src =0;
    // stack<int> topoOrder;
    // unordered_map<int,bool>visited;
    // g.topoOrderDfs(src,topoOrder,visited);

    // // cout<<"printing topoOrder"<<endl;
    // // while(!topoOrder.empty()){
    // //     cout<<topoOrder.top()<<" ";
    // //     topoOrder.pop();
    // // }

    // int n = 5;
    // g.shortestPathDfs(topoOrder,n);


    //dijkstra
    g.addEdge(1,6,14,0);
    g.addEdge(1,3,9,0);
    g.addEdge(1,2,7,0);
    g.addEdge(2,3,10,0);
    g.addEdge(2,4,15,0);
    g.addEdge(3,4,11,0);
    g.addEdge(6,3,2,0);
    g.addEdge(6,5,9,0);
    g.addEdge(5,4,6,0);
    int n=6;
    int src=6;
    int dest=4;
    g.dijkstraShortestDistance(6,6,4);
}