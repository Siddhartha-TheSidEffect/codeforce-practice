#include <bits/stdc++.h>
using namespace std;
 
// Type Aliases 
using ll = long long;
using vll = vector<long long>;
using vi = vector<int>;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using vpll = vector<pair<long long, long long>>;
using vpii = vector<pair<int, int>>;
 
// Constants
const ll MOD = 1e9 + 7; 
const ll INF = 1e18;
 
 
 
// Greatest Common Divisor
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
 
// Least Common Multiple
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
 
// Binary Exponentiation: (a^b) % m in O(log b)
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
bool isPrime(int n) {
    if (n <= 1) return false; 
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    // Check odd divisors from 5 up to sqrt(n)
    // Optimized: primes are in the form 6k +/- 1
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
 
// Modular Inverse: Used for (a/b) % MOD
ll modInverse(ll n, ll m = MOD) { return binpow(n, m - 2, m); }
 
// --- Debugging Utility (Local Only) ---
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
 
void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}
template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " "; } cerr << "]";}
 
void solve() {
    ll n;
    cin >> n;
    vll arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool sorted = true;
    for (ll i = 0; i < n-1; i++) {
        if(arr[i]>arr[i+1]){
            sorted = false;
            break;
        }
    }
    if(sorted){
        cout << n<<"
";
        return;
    }
    else{
        cout << "1
";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int T = 1;
    if (cin >> T) {
        while (T--) {
            solve();
        }
    } else {
        solve();
    }
    return 0;
}