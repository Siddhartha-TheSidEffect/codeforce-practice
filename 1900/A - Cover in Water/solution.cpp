#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
        
    if(s.find("...") != string::npos) {
        cout << 2 << "\n";
    } else {
        cout <<count(s.begin(), s.end(), '.') << "\n";
        
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
