#include <iostream>
#include <unordered_map>
#include <set>
#include <vector>
#include <list>
using namespace std;

vector<pair<pair<int,int>,int>> PrimsMST_01(int n, int m,vector<pair<pair<int,int>,int>>& edgeList){
    // Prepare Adj list
    unordered_map<int,list<pair<int,int>>> adj;
    for(int i = 0; i < edgeList.size(); i++){
        int u = edgeList[i].first.first;
        int v = edgeList[i].first.second;
        int w = edgeList[i].second;

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }

    vector<int> key(n+1);
    vector<bool> MST(n+1);
    vector<int> parent(n+1);

    for(int i = 0; i <= n; i++){
        key[i] = INT32_MAX;
        parent[i] = -1;
        MST[i] = false;
    }

    key[1] = 0;
    parent[1] = -1;

    for(int i = 1; i < n; i++ ){
        int mini = INT32_MAX;
        int u;
        // find minimun val
        for(int v = 1; v <= n; v++){
            if(MST[v] == false && key[v] < mini){
                u = v;
                mini = key[v];
            }
        }
        // mark min node as true
        MST[u] = true;

        // check it's adj nodes
        for(auto i : adj[u]){
            int v = i.first;
            int w = i.second;
            if(MST[v] == false && w < key[v]){
                parent[v] = u;
                key[v] = w;
            }
        }
    }
    vector<pair<pair<int,int>,int>> ans;

    for(int i = 2; i <= n; i++ ){
        ans.push_back({{parent[i],i},key[i]});
    }
    return ans;

}

int findMin(int n, vector<bool>& mst, vector<int>& key){
    int mini = INT32_MAX;
    int u;
    for(int v = 1; v <= n; v++){
        if(mst[v] == false && key[v] < mini){
            u = v;
            mini = key[v];
        }
    }
    return u;
}

vector<pair<pair<int,int>,int>> primsMST(unordered_map<int,list<pair<int,int>>>& adj, int n, int m){
    vector<int> key(n,INT32_MAX);
    vector<int> parent(n,-1);
    vector<bool> mst(n,false);

    key[0] = 0;
    parent[0] = -1;

    for(int i = 0; i < n; i++){
        int u = findMin(n,mst,key);

        for(auto i : adj[u]){
            int v = i.first;
            int w = i.second;
            if(mst[v] == false && w < key[v]){
                parent[v] = u;
                key[v] = w;
            }
        }
    }

    vector<pair<pair<int,int>,int>> ans;

    for(int i = 2; i <= n; i++ ){
        ans.push_back({{parent[i],i},key[i]});
    }
    return ans;
}
                   
int main()
{
    int n,m;
    cin>>n>>m;
    // vector<pair<pair<int,int>,int>> edgeList(m);
    // for(int i = 0; i < m; i++){
    //     int u,v,w;
    //     cin>>u>>v>>w;
    //     pair<pair<int,int>,int> curr = {{u,v},w};
    //     edgeList.push_back(curr);
    // }
    // vector<pair<pair<int,int>,int>> ans = PrimsMST_01(n,m,edgeList);

    // for(int i = 0; i < ans.size(); i++){
    //     cout<<ans[i].first.first<<" ";
    //     cout<<ans[i].first.second<<" ";
    //     cout<<ans[i].second<<" ";
    //     cout<<endl;
    // }

    unordered_map<int,list<pair<int,int>>> adj;
    for(int i = 0; i < m; i++){
        int u,v,w;
        cin>>u>>v>>w;

        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }
    vector<pair<pair<int,int>,int>> ans = primsMST(adj,n,m);
    cout<<endl<<endl;
    int w = 0;
    cout<<"Edges\tWeight"<<endl;
    for(auto i : ans){
        cout<<i.first.first<<"--";
        cout<<i.first.second;
        cout<<"\t  "<<i.second;
        w += i.second;
        cout<<endl;
    }
    cout<<endl;
    cout<<"Minimum Cost: "<<w<<endl;
    return 0;
}

// 5 14
// 1 2 2
// 1 4 6
// 2 1 2
// 2 3 3
// 2 4 8
// 2 5 5
// 3 2 3
// 3 5 7
// 4 1 6
// 4 2 8
// 4 5 9
// 5 2 5
// 5 3 7
// 5 4 9

// 1 2 2
// 1 4 6
// 2 3 3
// 2 5 5