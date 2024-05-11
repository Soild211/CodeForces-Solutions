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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
   vi l,r;
   for(int i=min(a,b)+1;i<max(a,b);i++){
    l.pb(i);
   }
   for(int i=1;i<=12;i++){
        if(i==a || i==b){
            continue;
        }
        int cnt = count(l.begin(), l.end(), i);
        if(cnt>0){
            continue;
        }
        else r.pb(i);
   }
   int cnt=count(l.begin(), l.end(), c);
   int cnt2=count(l.begin(), l.end(), d);
   if(cnt+cnt2==2 || cnt+cnt2==0){
    cout<<"NO"<<nL;
   }
else cout<<"YES"<<nL;
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