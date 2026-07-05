#include <bits/stdc++.h>
#include<cmath>
using namespace std;
 
int main(){
    long long t;
    cin >> t;
 
    while(t--){
        long long n, x;
        cin >> n >> x;
 
        vector<long long> v(n,0);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        long long maxi = 0;
        long long sum = 0;
        for(int i =0; i < n; i++){
            maxi += ceil(v[i] * 1.0 /x);
            sum += v[i];
        }
 
        long long mini = ceil(sum * 1.0/ x);
 
        cout << mini << " " << maxi << "
";
 
 
 
    }
}