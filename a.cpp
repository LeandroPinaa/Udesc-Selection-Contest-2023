#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define NMAX 200005
#define MOD 1000000007
#define int long long
#define INF 1e18
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ost tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
#define pii pair<int,int>

int valor[NMAX];
vector<int>v[NMAX];

int32_t main(){ faster
    int n,m,j=1;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        int k,vv;
        cin >> k >> vv;
        valor[i] = vv;
        while(k--){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    int ans=INF, qtd=0,l,r;
    unordered_map<int,int>fig;
    for(int i=1;i<=n;i++){
        for(auto it:v[i]){
            fig[it]++;
        }
        qtd += valor[i];
        while(fig.size() == m){
            if(qtd < ans){
                ans = qtd;
                l = j;
                r = i;
            }
            for(auto it:v[j]){
                fig[it]--;
                if(fig[it]==0) fig.erase(it);
            }
            qtd -= valor[j];
            j++;
        }
    }
    if(ans==INF) cout << "-1\n";
    else{
        cout << ans << '\n';
        cout << l << " " << r << '\n';
    }
}
/*
4 5
1 2 5
2 4 1 5
3 5 4 2 1
2 1 3 1
*/