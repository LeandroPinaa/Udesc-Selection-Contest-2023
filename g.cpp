#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define NMAX 3005
#define MOD 1000000007
#define int long long
#define INF 1e18
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ost tree<int,null_type,less<int>,rb_tree_tag,tree_order_statistics_node_update>
#define pii pair<int,int>

int dp[NMAX][NMAX];

int32_t main(){ faster
    int n;
    string s;
    cin >> n >> s;
    dp[0][0] = 1;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=n;j++){
            if(s[i-1] == '('){
                if(j>0) dp[i][j] = dp[i-1][j-1];
            }
            else if(s[i-1]==')'){
                if(j<n) dp[i][j] = dp[i-1][j+1];
            }
            else{
                if(j>0) dp[i][j] = (dp[i][j]+dp[i-1][j-1])%MOD;
                if(j<n) dp[i][j] = (dp[i][j]+dp[i-1][j+1])%MOD;
            }
        }
    }
    cout << dp[n][0] << '\n';
}
/*

*/