#include <bits/stdc++.h>
using namespace std;
 
using ll=long long;
using vll=vector<long long>;
using vi=vector<int>;
using pii=pair<int,int>;
using pll=pair<long long,long long>;
using vpll=vector<pair<long long,long long>>;
using vpii=vector<pair<int, int>>;
 
#define in(v) for(auto &x:v) cin>>x
#define out(v) for(auto x:v) cout<<x<<" ";cout<<'
'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define rep(i, a, b) for(ll i = a; i < (b); ++i)
#define per(i, a, b) for(ll i = (b)-1; i >= a; --i)
#define pb push_back
#define eb emplace_back
#define F first
#define S second
#define sz(x) (ll)(x).size()
#define all(x) (x).begin(),(x).end()
#define rall(x) (x).rbegin(),(x).rend()
#define srt(x) sort(all(x))
#define rsrt(x) sort(rall(x))
#define rev(x) reverse(all(x))
 
const ll MOD=1e9+7; 
const ll INF=1e18;
 
ll gcd(ll a,ll b){return b==0?a:gcd(b,a%b); }
 
ll lcm(ll a,ll b){return(a/gcd(a,b))*b; }
 
ll binpow(ll a,ll b,ll m=MOD) {
    a%=m;
    ll res=1;
    while(b>0){
        if(b&1) res=res*a%m;
        a=a*a%m;
        b>>=1;
    }
    return res;
}
bool isPrime(int n) {
    if(n<=1) return false; 
    if(n <= 3) return true;
    if(n%2==0 || n%3==0) return false;
    for(int i=5;i*i<=n;i+=6){
        if(n%i==0 || n%(i+2)==0)
            return false;
    }
    return true;
}
 
ll modInverse(ll n,ll m=MOD) { return binpow(n,m-2,m); }
ll add(ll a,ll b,ll m=MOD) { 
    ll ans=(((a%m)+(b%m))%m);
    if(ans<0) ans+=m;
    return ans; 
}
ll sub(ll a,ll b,ll m=MOD) { 
    ll ans=(((a%m)-(b%m))%m);
    if(ans<0) ans+=m;
    return ans; 
}
ll mul(ll a,ll b,ll m=MOD) { 
    ll ans=(((a%m)*(b%m))%m);
    if(ans<0) ans+=m;
    return ans;
}
 
 
//for interactive problems(use C++ 20 to use contains fucntion of map )
map<int,int> prev_values;
int query(int index) {
    //if (prev_values.contains(index)) {
        //return prev_values[index];
    //}
    if(index==0||index==1) return INF;
    //cout << "? " << index << endl;
    int res;
    cin>>res;
    return prev_values[index] = res;
    
}
// binary search 
//int l=starting-1;
//int r=n+1;
//while (r-l>1) {
    //int mid =  (r + l) / 2;
    //(arr[m]<target) ? l = mid : r = mid;
    //arr[m]<target used to get the first index of target 
    //arr[m]<=target used to get the last index of target
        
//}
    
 
 
 
#ifndef ONLINE_JUDGE
#define debug(x) cerr<<#x<<" "; _print(x); cerr<<endl;
#else
#define debug(x)
#endif
 
void _print(ll t) {cerr<<t;}
void _print(int t) {cerr<<t;}
void _print(string t) {cerr<<t;}
void _print(char t) {cerr<<t;}
void _print(double t) {cerr<<t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector<T>v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " "; } cerr << "]";}
 
void solve() {
    ll n,m; cin>>n>>m; vll arr(n);
    for(ll i=0;i<n;i++){ cin>>arr[i];}
    srt(arr);
    vector<ll>tm(m+1,0);
    ll l=0;
    ll unique=0;
    //ll r=0;
     ll mini=2e9;
    for( ll r=0;r<=n-1;r++){
        for(ll i=1;i*i<=arr[r];i++){
            if(arr[r]%i==0){
                if(i<=m){
                    if(tm[i]==0){unique++;}
                    tm[i]++;
                }
                ll i2=arr[r]/i;
                if(i2<=m && i2!=i){
                    if(tm[i2]==0){unique++;}
                    tm[i2]++;
                }
 
            }
        }
        while(unique==m){
            mini=min(mini,arr[r]-arr[l]);
            ll temp=arr[l];
            for(ll i=1;i*i<=arr[l];i++){
                if(arr[l]%i==0){
                    if(i<=m){
                        tm[i]--;
                        if(tm[i]==0){ unique--;}
                    }
                    ll temp2=arr[l]/i;
                    if(temp2<=m && temp2!=i){
                        tm[temp2]--;
                        if(tm[temp2]==0){unique--;}
                    }
                }
            }
            l++;
        }
    }
   
    if(mini==2e9){ cout<<-1<<endl; return;}
    cout<<mini<<endl;
 
 
    
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T=1;
    if(cin>>T){
        while(T--){
            solve();
        }
    }else{
        solve();
    }
    return 0;
}