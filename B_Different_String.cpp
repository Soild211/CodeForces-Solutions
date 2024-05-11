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
    string s;
    cin>>s;
    bool change=false;
    char reserve=s[0];
    int i=0;
    for(char c:s){
        if(c==reserve){
            i++;
            continue;
        }
        else{

            change=true;
        cout<<"YES"<<endl;
        reserve=c;
        break;
        }

    }
    if(change){
    swap(s[0],s[i]);
        cout<<s<<nL;
    }
    if(!change){
        cout<<"NO"<<nL;
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