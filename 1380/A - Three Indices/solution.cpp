#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin >> t;
 
    while(t--){
        long long n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        bool res = false;
        for(int i = 1; i < n-1; i++){
            if(v[i-1] < v[i] && v[i] > v[i+1]){
                cout <<"YES" << "
";
                cout << i << " " << i + 1 << " " << i + 2 << "
";
                res = true;
                break;
            }
        }
        if(!res){
            cout << "NO" <<"
";
        }
    }
}