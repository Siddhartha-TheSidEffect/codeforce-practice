#include<bits/stdc++.h> 
using namespace std;  
void solve() {    
  long long n,x;    
  cin >> n>>x;    
  vector<long long> arr;    
  arr.push_back(0);    
  for(int i=0;i<n;i++){        
    long long temp;        
    cin >> temp;        
    arr.push_back(temp);    
  }    arr.push_back(x);    
  long long a=arr.size();    
  long long maxi = INT_MIN;    
  for(int i=1;i<a;i++){        
    if(i==a-1){            
      maxi=max(maxi,2*(arr[i]-arr[i-1]));        
    }        
    else{            
      maxi=max(maxi,(arr[i]-arr[i-1]));                
    }    
  }    
  cout << maxi << endl;               
} // --- MAIN DRIVER ---
int main() {    // Fast I/O: 10x faster input reading    
  ios_base::sync_with_stdio(false);    
  cin.tie(NULL);     
  int T = 1;    
  cin >> T; // Comment this out if problem has NO test cases    
  while (T--) {        
    solve();    
  }    
  return 0;
}
