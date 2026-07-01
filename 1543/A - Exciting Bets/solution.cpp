#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
 
int main(){
    long long t;
    cin >> t;
 
    while(t--){
        long long a, b;
        cin >> a >> b;
 
        if(a == b){
            cout << 0 << " "<< 0 <<"
";
        }
        else{
            if(a < b) swap(a, b);
 
            long long delta = a - b;
 
            cout << delta << " " <<min(b%delta , delta - b%delta) << "
";
 
            
        }
    }
}