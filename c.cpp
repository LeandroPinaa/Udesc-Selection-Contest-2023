#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define NMAX 100005
#define MOD 1000000007
#define int long long
#define INF 1e18
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ost tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
#define pii pair<int,int>
#define piii pair<pii,int>

vector<int>grafo[NMAX];
bool devendo[NMAX]; //true se ele deve nessa cidade
vector<int>dist(NMAX,INF); //minimizar cidades devendo (prioridade 1)
vector<int>dist2(NMAX,INF); //minimizar quantas cidades passou (prioridade 2)
bool marc[NMAX];

void Dijkstra(int x){
    dist[x] = devendo[x];
    dist2[x] = 0;
    priority_queue<piii,vector<piii>,greater<piii>>fila;
    fila.push({{0,0},x});
    while(!fila.empty()){
        int u = fila.top().second;
        fila.pop();
        if(marc[u]) continue;
        marc[u] = true;
        for(auto viz:grafo[u]){
            if(dist[viz] > dist[u]+devendo[viz]){
                dist[viz] = dist[u]+devendo[viz];
                if(dist2[viz] > dist2[u]+1){
                    dist2[viz] = dist2[u]+1;
                }
                fila.push({{dist[viz],dist2[viz]},viz});
            }
        }
    }
}

int32_t main(){ faster
    int n,m,d;
    cin >> n >> m >> d;
    for(int i=0;i<d;i++){
        int x;
        cin >> x;
        devendo[x] = true;
    }
    while(m--){
        int a,b;
        cin >> a >> b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }
    Dijkstra(1);
    cout << dist[n] << " " << dist2[n] << '\n';
}