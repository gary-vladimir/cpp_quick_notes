#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
typedef long long ll;

struct node{
    int node;
    ll cost;
    bool operator < (const struct node &b) const{
        if(cost != b.cost) return cost > b.cost;
        if(node != b.node) return node > b.node;
        return 0;
    }
};

const ll INF = 1E18;

int main(){
    int n, m; cin>>n>>m;
    vector<vector<node>> adj(n);
    vector<int> BACK(n, -1);

    for(int i = 0; i < m; i++){
        int u, v; ll w;
        cin>>u>>v>>w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    vector<ll> dist(n, INF);
    int source; cin >> source;
    dist[source] = 0;

    priority_queue<node> dijkstra;
    dijkstra.push({source, 0});

    while(!dijkstra.empty()){
        node c = dijkstra.top();
        dijkstra.pop();
        if(c.cost > dist[c.node]) continue;

        for(node adj: adj[c.node]){
            if(c.cost + adj.cost >= dist[adj.node])continue;
            dist[adj.node] = c.cost + adj.cost;
            BACK[adj.node] = c.node;
            dijkstra.push({adj.node,c.cost + adj.cost});
        }
    }

    for(int i = 0; i < n; i++){
        cout<<i<<": cost:"<<dist[i]<<" path:";
        vector<int> path;
        int current = i;
        while (current != -1) {
            path.push_back(current);
            current = BACK[current];
        }
        reverse(path.begin(), path.end());
        for(auto e:path)cout << e << " ==> ";
        cout << endl;
    }

    return 0;
}
