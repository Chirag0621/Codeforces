#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin >> t;
 
    while(t--){
        long long n;
        cin >> n;
        long long cnt = 0;
        while(n >= 1){
            if(n == 1) {
                cout << cnt <<"
";
                break;
            }
            if(n % 6 == 0){
                n = n/6;
                cnt++;
            }
            else{
                n *= 2;
                cnt++;
            } 
        }
        if(n < 0) cout << "-1" <<"
";
        
    }
}