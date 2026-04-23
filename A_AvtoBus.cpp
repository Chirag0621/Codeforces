#include<iostream>
using namespace std;
 
int main(){
    long long t;
    cin >> t;
 
    while(t--){
        long long n;
        cin >> n;
 
        if(n % 2 != 0 || n < 4){
            cout << -1 << "\n";
            continue;
        }
 
        long long mini = (n + 5) / 6;
        long long maxi = n / 4;
 
        if(mini > maxi)
            cout << -1 << "\n";
        else
            cout << mini << " " << maxi << "\n";
    }
 
    return 0;
}