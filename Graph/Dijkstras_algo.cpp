#include <iostream>
#include <unordered_map>
#include <set>
#include <vector>
#include <list>
using namespace std;

void print(unordered_map<int, list<pair<int, int>>> &adj)
{
    for (auto i : adj)
    {
        cout << i.first << "-> ";
        for (auto j : i.second)
        {
            pair<int, int> curr = j;
            cout << "[ " << curr.first << " " << curr.second << " ] ";
        }
        cout << endl;
    }
}

vector<int> Dijkstra(vector<vector<int>> &vec, int vertices, int edges, int src)
{

    // 1] Prepare Adj List
    unordered_map<int, list<pair<int, int>>> adj;
    for (int i = 0; i < edges; i++)
    {
        int u = vec[i][0];
        int v = vec[i][1];
        int w = vec[i][2];

        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }
    // print(adj);

    // creation of dist array with infinte value initially
    vector<int> dist(vertices);
    for (auto i : dist)
        i = INT32_MAX;

    // creation of set on basis (distance,node)
    set<pair<int, int>> st;

    // initliase distance and set with src node
    dist[src] = 0;
    st.insert(make_pair(0, src));

    //
    while (!st.empty())
    {

        // Fetch top Node
        auto top = *(st.begin());
        int node_dist = top.first;
        int top_node = top.second;

        // Remove top record now
        st.erase(st.begin());

        // Traverse on neighbours
        for (auto neigh : adj[top_node])
        {
            if (node_dist + neigh.second < dist[neigh.first])
            {
                auto record = st.find(make_pair(dist[neigh.first], neigh.first));
                // if reocord found erase it
                if (record != st.end())
                {
                    st.erase(record);
                }

                // update dist
                dist[neigh.first] = node_dist + neigh.second;

                // record push in set
                st.insert(make_pair(dist[neigh.first], neigh.first));
            }
        }
    }
    return dist;
}
string interpret(string command)
{
    string s = "";
    for (int i = 0; i < command.size();)
    {
        if (command[i] == 'G')
        {
            s += 'G';
            i++;
        }
        else if (command[i] == '(' && command[i + 1] == ')')
        {
            s += 'o';
            i += 2;
        }
        else
        {
            s += "al";
            i += 4;
        }
    }
    return s;
}

int main()
{

    int vertices, edges;
    cin >> vertices >> edges;

    vector<vector<int>> vec(edges, vector<int>(3, 0));
    for (int i = 0; i < edges; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        vec[i][0] = u;
        vec[i][1] = v;
        vec[i][2] = w;
    }

    for (auto i : vec)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    vector<int> ans = Dijkstra(vec, vertices, edges, 0);
    for (auto i : ans)
        cout << i << " ";
    return 0;
}

// 5 7
// 0 1 7
// 0 2 1
// 0 3 2
// 1 2 3
// 1 3 5
// 1 4 1
// 3 4 7