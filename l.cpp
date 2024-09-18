#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define NMAX 200005
#define MOD 1000000007
#define int long long
#define INF 1e13
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ost tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
#define pii pair<int,int>
#define m (l+r)/2

#define VMAX 36

int v[NMAX];
int dp[NMAX*VMAX];

int32_t main(){ faster
    int n;
    cin >> n;
    for(int i=0;i<n;i++) cin >> v[i];
    if(n>VMAX){ //teorema do subconjunto de soma 0
        cout << "S\n"; return 0;
    }
    dp[0] = 1;
    for(int i=0;i<n;i++){
        for(int j=NMAX*VMAX;j-v[i]>=0;j--)
            dp[j] += dp[j-v[i]];
    }
    for(int i=0;i<NMAX*VMAX;i++){
        if(dp[i]>1){
            cout << "S\n"; return 0;
        }
    }
    cout << "N\n";
}