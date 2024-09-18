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
#define pii pair<int,int>
#define ost tree<pii,null_type,less<pii>,rb_tree_tag,tree_order_statistics_node_update>

int32_t main(){ faster
    int n,k;
    string s;
    cin >> n >> k >> s;
    int even=0,odd=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(i%2==0) even++;
            else odd++;
        }
    }
    int diff = abs(even-odd);
    if(n%2==0 && diff%3!=0) cout << "GIOVANA\n";
    else cout << "JULIA\n";
}
/*
1
5 5
#...#
....#
#...#
.....
...##
*/