#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin >> t;
 
    while(t--){
        long long n,k;
        cin >> n >> k;
        vector<long long> v(n*k,0);
        for(int i = 0; i < n*k; i++){
            cin >> v[i];
        }
 
        long long jump = n - (n + 1) / 2 + 1;
 
        long long  idx = n * k - jump;
 
        long long ans = 0;
 
        while (k--) {
            ans += v[idx];
            idx -= jump;
        }
 
        cout << ans << '
';
 
        
    }
}