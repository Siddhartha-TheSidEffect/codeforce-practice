#include <bits/stdc++.h>
using namespace std;
 
 
using ll = long long;
using vll = vector<long long>;
using vi = vector<int>;
using pii = pair<int, int>;
 
// Constants
const ll MOD = 1e9 + 7; // or 998244353
const ll INF = 1e18;
 
// Math Functions
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll binpow(ll a, ll b, ll m = MOD) {
    a %= m;
    ll res = 1;
    while (b > 0) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
ll modInverse(ll n, ll m = MOD) { return binpow(n, m - 2, m); }
 
// Debugging Utility
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " "; } cerr << "]";}
 
void solve() {
    ll n,s,x;
    cin >> n >> s >> x;
    vll a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    ll sum =accumulate(a.begin(), a.end(), 0LL);
    if(sum<=s){
        if(sum==s){
            cout << "YES
";
            return;
        }
        else if((s-sum)%x==0){
            cout << "YES
";
            return;
        }
        else{
            cout << "NO
";
            return;
        }
        
    }
    else if(sum>s){
        cout << "NO
";
        return;
    }
}
    
 
int main() {
    // Fast I/O - Essential for competitive programming
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    int T = 1;
    cin >> T; 
    while (T--) {
        solve();
    }
    return 0;
}