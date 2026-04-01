#include <bits/stdc++.h>
using namespace std;

// --- FAST I/O & SHORTCUTS ---
using ll = long long;
using vll = vector<long long>;
using vi = vector<int>;
using pii = pair<int, int>;

// Constants
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

// --- LOGIC ---
void solve() {
    int n;
    cin >> n;
    map<int, int> counts;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int color;
            cin >> color;
            counts[color]++;
        }
    }
    bool possible = true;
    for (auto const& [color,freq] : counts) {

        if (freq > n * (n-1)) {
            possible = false;
            break;
        }
    }
    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

// --- MAIN DRIVER ---
int main() {
    // Fast I/O: 10x faster input reading
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T = 1;
    cin >> T; // Comment this out if problem has NO test cases
    while (T--) {
        solve();
    }
    return 0;
}
