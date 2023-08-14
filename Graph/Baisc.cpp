#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


// using adjacency matrix
class Graph{
    vector<vector<int>> adj;
    public:
    Graph(vector<vector<int>>& adj){
        this->adj = adj;
    }
    void add(int u, int v, int dir){
        adj[u][v] = 1;

        if(dir == 1){
            adj[v][u] = 1;
        }
    }

    void print(){
        cout<<"\nPrinting Graph-->\n";
        for(auto i : adj){
            for(auto j : i){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};

// using adjacency List
class Graph_01{
    unordered_map<int,vector<int>> adj;
    public:
    void add(int u, int v, int dir){
        adj[u].push_back(v);

        if(dir == 1){
            adj[v].push_back(u);
        }
    }

    void print(){
        cout<<"\nPrinting Graph-->\n";
        for(auto i : adj){
            cout<<i.first<<"-> ";
            for(auto j : i.second){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }
};
                   
int main()
{
    int n,m;
    cout<<"Enter no of vertices: ";
    cin>>n;
    cout<<"Enter no of edges: ";
    cin>>m;
    vector<vector<int>> adj(n,(vector<int>(n,0)));
    Graph g(adj);
    Graph_01 g_01;

    
    for(int j = 0; j < m; j++){
        int u,v;
        cin>>u>>v;
        g.add(u,v,1);
        g_01.add(u,v,1);
    }

    g.print();
    g_01.print();

    return 0;
}
