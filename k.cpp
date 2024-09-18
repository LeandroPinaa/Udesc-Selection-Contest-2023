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
    map<char,pii>mp;
    char ch = 'A';
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            mp[ch] = {i,j};
            ch++;
            if(ch=='K'){
                mp[ch] = {1,3};
                ch++;
            }
        }
    }   
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0;i<n;i++){
        for(int a=0;a<mp[s[i]].first;a++) cout << "*";
        cout << " ";
        for(int a=0;a<mp[s[i]].second;a++) cout << "*";
        cout << " ";
    } cout << '\n';
}
/*
problem k

matriz


*/