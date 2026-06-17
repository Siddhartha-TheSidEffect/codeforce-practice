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
    ll a,b,c,m;
 
    cin >> a >> b >> c >> m;
    ll a_ans=0;
    ll b_ans=0;
    ll c_ans=0;
    ll common=lcm(a,lcm(b,c));
    ll temp_common=m/common;
    a_ans+=((m/(lcm(a,b)))*3-temp_common*2);
    a_ans+=((m/(lcm(a,c)))*3-temp_common*2);
    b_ans+=((m/(lcm(b,c)))*3-temp_common*2);
    b_ans+=((m/(lcm(a,b)))*3-temp_common*2);
    c_ans+=((m/(lcm(a,c)))*3-temp_common*2);
    c_ans+=((m/(lcm(b,c)))*3-temp_common*2);
    a_ans+=((m/a)-((m/(lcm(a,b)))+m/(lcm(a,c))-temp_common))*6;
    b_ans+=((m/b)-((m/(lcm(a,b)))+m/(lcm(b,c))-temp_common))*6;
    c_ans+=((m/c)-((m/(lcm(a,c)))+m/(lcm(b,c))-temp_common))*6;
    cout << a_ans << " " << b_ans << " " << c_ans << "
";
 
    
    
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