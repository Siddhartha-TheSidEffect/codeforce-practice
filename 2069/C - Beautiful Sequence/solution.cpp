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
vector<ll>arr;
vector<vector<ll>>dp;
ll n;
ll solve(ll i,ll s) {
    if(s==3)return 1;
    if(i==0)return 0;
    if(dp[i][s]!=-1)return dp[i][s];
    ll skip=solve(i-1,s);
    ll take=0;
    if(arr[i]==3 &&s==0){take=solve(i-1,1);}
    else if (arr[i]==2 &&s==1){
        take=solve(i-1,2);
    }else if(arr[i]==2 && s==2){
        take=solve(i-1,2);
    }else if(arr[i]==1 && s==2){take=solve(i-1,3);}
    return dp[i][s]=(take+skip)%998244353; 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T=1;
    cin>>T;
    while(T--){
        cin>>n;
        arr.resize(n+1);
        dp.assign(n+1,vector<ll>(4,-1));
        for(ll i=1;i<=n;i++){cin>>arr[i];}
        cout<<solve(n,0)<<endl;
    }
    return 0;
}