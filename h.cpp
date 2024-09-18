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
#define m (l+r)/2

int32_t main(){ faster
    set<int>s; s.insert(0);
    int n;
    cin >> n;
    int first = n * (-5);
    int second = n * 2;
    s.insert(first);
    s.insert(second);
    cout << s.size() << '\n';
    for(auto it:s) cout << it << " ";
    cout << '\n';
}
/*

problem h

0 em todos
distributiva

problem k

matriz


*/