#include <bits/stdc++.h>
using namespace std;
 
using ll=long long;
using vll=vector<long long>;
using vi=vector<int>;
using pii=pair<int,int>;
using pll=pair<long long,long long>;
using vpll=vector<pair<long long,long long>>;
using vpii=vector<pair<int, int>>;
 
#define Mat2D_ROW(mat, n, m) vector<vector<long long>> mat(n, vector<long long>(m)); \
                      for(int i = 0; i < n; ++i) for(int j = 0; j < m; ++j) cin >> mat[i][j];
 
#define Mat2D_COL(mat, n, m) vector<vector<long long>> mat(m, vector<long long>(n)); \
                      for(int i = 0; i < n; ++i) for(int j = 0; j < m; ++j) cin >> mat[j][i];                     
 
#define pb push_back
#define eb emplace_back
#define srt(x) sort(all(x))
#define rsrt(x) sort(rall(x))
#define rev(x) reverse(all(x))
 
const ll MOD=1e9+7; 
const ll INF=1e18;
 
ll gcd(ll a,ll b){return b==0?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return(a/gcd(a,b))*b;}
ll binpow(ll a,ll b,ll m=MOD){a%=m;ll res=1;while(b>0){if(b&1)res=res*a%m;a=a*a%m;b>>=1;}return res;}
bool isPrime(int n){if(n<=1)return false;if(n<=3)return true;if(n%2==0||n%3==0)return false;for(int i=5;i*i<=n;i+=6){if(n%i==0||n%(i+2)==0)return false;}return true;}
ll modInverse(ll n,ll m=MOD){return binpow(n,m-2,m);}
ll add(ll a,ll b,ll m=MOD){ll ans=(((a%m)+(b%m))%m);if(ans<0)ans+=m;return ans;}
ll sub(ll a,ll b,ll m=MOD){ll ans=(((a%m)-(b%m))%m);if(ans<0)ans+=m;return ans;}
ll mul(ll a,ll b,ll m=MOD){ll ans=(((a%m)*(b%m))%m);if(ans<0)ans+=m;return ans;}
 
 
//for interactive problems(use C++ 20 to use contains fucntion of map )
//map<int,int> prev_values;
//int query(int index) {
    //if (prev_values.contains(index)) {
        //return prev_values[index];
    //}
    //if(index==0||index==1) return INF;
    //cout << "? " << index << endl;
    //int res;
    //cin>>res;
    //return prev_values[index] = res;
    
//}
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
string s;
vector<ll>dp;
ll n,p,x,y,k;
 
ll solve(ll i){
    if(i>n)return 0;
    if(dp[i]!=-1)return dp[i];
    ll t=-1;
    if(s[i-1]=='1'){
        t=solve(i+k);
    }else{ t=x+solve(i+k);}
    return dp[i]=t;
 
}
void cost() {
     cin>>n>>p>>k; 
    cin>>s;
    cin>>x>>y;
    ll ans=1e18;
    dp.assign(n+1,-1);
    for(ll i=p;i<=n;i++){
        ll add=solve(i);
        ll rem=1LL*(i-p)*y;
        ans=min(ans,add+rem);
 
    } 
    cout<<ans<<endl;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        cost();
    }
    return 0;
    
    
    //state=contain the minimum value required where we have to add platform 
    //transition=if (s[i]=='1' then t=solve(i-k)and else t=x+solve(i-k) at dp[i]=t)
    //base case=if i<p return 0
}