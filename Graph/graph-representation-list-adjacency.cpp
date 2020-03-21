#include<bits/stdc++.h>
using namespace std;
//addEdge function to add edge between vertices

void addEdge(vector<int>adj[],int u,int v)
{
    adj[v].push_back(u);//undirected graph (v----u)
    adj[u].push_back(v);//undirected graph (u----v)
}

//function for printing the graph in the form of list of vectices a vertex connected

void printGraph(vector<int>adj[],int V)
{
    for(int v=0;v<V;v++)
    {
        cout<<"Adjacency list of vertex "<<v<<"\n head";
        for(auto x:adj[v])
        cout<<"->"<<x;
        cout<<endl;
    }
}
int main()
{
    int V=5;
    vector<int> adj[V];
    addEdge(adj,0,1);
    addEdge(adj,0,4);
    addEdge(adj,1,2);
    addEdge(adj,1,3);
    addEdge(adj,1,4);
    addEdge(adj,2,3);
    addEdge(adj,3,4);
    addEdge(adj,3,1);
    printGraph(adj,V);
}