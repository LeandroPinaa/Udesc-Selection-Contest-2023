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
    int n,qtd=0;
    cin >> n;
    string s,ans="";
    cin >> s;
    for(int i=0;i<n;i++){
        if(s[i]=='b'){
            if(i-1>=0 && s[i-1]=='a'){ //existe ab
                if(i+1==n){ // termina com ab
                    qtd += 2;
                    ans.push_back('0');
                }
                else if(i+1<n && s[i+1]=='a'){ 
                    if(i+2==n){ // termina com aba
                        qtd += 3;
                        ans.push_back('1');
                    }
                    else if(i+2<n && s[i+2]=='a'){
                        qtd += 3;
                        ans.push_back('1');
                    }
                    else if(i+2<n && s[i+2]=='b'){
                        qtd += 2;
                        ans.push_back('0');
                    }
                }
            }
        }
    }
    if(qtd == n) cout << ans << '\n';
    else cout << ":(\n";
}