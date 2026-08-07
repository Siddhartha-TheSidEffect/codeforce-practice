#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
using vll = vector<long long>;
using vi = vector<int>;
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using vpll = vector<pair<long long, long long>>;
using vpii = vector<pair<int, int>>;
 
const ll MOD = 1e9 + 7; 
const ll INF = 1e18;
 
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
bool isPrime(int n) {
    if (n <= 1) return false; 
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
 
ll modInverse(ll n, ll m = MOD) { return binpow(n, m - 2, m); }
 
//for interactive problems(use C++ 20 to use contains fucntion of map )
map<int,int> prev_values;
int query(int index) {
    //if (prev_values.contains(index)) {
        //return prev_values[index];
    //}
    if(index==0||index==1) return INF;
    //cout << "? " << index << endl;
    int res;
    cin >> res;
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
    ll w,h,area=0,base,temp_1,temp_2,temp_3,temp_4;
    cin >> w >>h;
    vll length_1,length_2,breadth_1,breadth_2;
    vll max_len(4);
    cin>>temp_1;
    length_1.resize(temp_1);
    for (ll i = 0; i <temp_1; i++) {
        cin >> length_1[i];  
        
    }
    max_len[0]=length_1[temp_1-1]-length_1[0];
    
    cin>>temp_2;
    length_2.resize(temp_2);
    for (ll i = 0; i <temp_2; i++) {
        cin >> length_2[i];
        
    }
    max_len[1]=length_2[temp_2-1]-length_2[0];
    cin>>temp_3;
    breadth_1.resize(temp_3);
    for (ll i = 0; i <temp_3; i++) {
        cin >> breadth_1[i];
        
    }
    max_len[2]=breadth_1[temp_3-1]-breadth_1[0];
    cin>>temp_4;
    breadth_2.resize(temp_4);
    for (ll i = 0; i <temp_4; i++) {
        cin >> breadth_2[i];
    }
    max_len[3]=breadth_2[temp_4-1]-breadth_2[0];
    for(ll i=0;i<4;i++){
        ll temp_len;
        if(i<=1){
            temp_len=h;
        }
        else{
            temp_len=w;
        }
 
        area=max(area,(max_len[i]*temp_len));
    }
 
    cout<<area<<endl;
 
 
    
    
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