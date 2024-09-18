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
//#define m (l+r)/2

int32_t main(){ faster
    vector<int>v;
    int n,m;
    cin >> n >> m;
    while(m--){
        int x;
        cin >> x;
        v.push_back(x);
    }
    int ans = v[0];
    for(int i=0;i<v.size()-1;i++){ //percorre todos exceto o ultimo
        int dif = v[i+1] - v[i];
        double diff = dif/2.0;
        dif = ceil(diff);
        //cout << "dif = " << dif << '\n';
        ans = max(ans,dif);
    } 
    ans = max(ans,n - v[v.size()-1]);
    cout << ans << '\n';
}
/*
problem m

dif entre eles com 0 e n
essa dif/2 procura o max

0 0 X 0 0 0 0 0 0 X 0

problem h

0 em todos
distributiva

problem k

matriz


*/