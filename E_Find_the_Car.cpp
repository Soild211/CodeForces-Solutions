#include <bits/stdc++.h>
using namespace std;
void dbg_out(){cerr<<endl;}
template<typename Head,typename ...Tail>
void dbg_out(Head H,Tail... T){ cerr<<' '<<H;dbg_out(T...);};
#define dbg(...) cerr << "( " << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nL "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
void solve(){
    int n,k,q;
    cin>>n>>k>>q;
    int a[k],b[k];
    vi dp;
    for(int i=0;i<k;i++){
        cin>>a[i];
    }
    for(int i=0;i<k;i++){
        cin>>b[i];
    }
    int ans[q];
    for(int i=0;i<q;i++){
        cin>>ans[i];
    }
    

}
int32_t main(){             
    ios_base::sync_with_stdio(false);    
    cin.tie(NULL);    
    int ttt; 
    cin >> ttt;    
    while(ttt--) {   
        solve();
     }   
         return 0;
}