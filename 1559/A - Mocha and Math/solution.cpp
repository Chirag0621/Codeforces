#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
 
int main(){
    long long t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n,0);
        
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
 
        int ans = v[0];
        for(int i = 1; i < n; i++){
            ans = ans & v[i];
        }
 
        
 
        cout << ans <<"
";
    }
}