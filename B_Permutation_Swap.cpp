#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
  long long t;
  cin >> t;
  while(t--){
    long long n,b,ans = 0;
    cin>>n;
    vector<long long> v;
    for(long long i = 1; i <= n; i++){
      cin>>b;
      if(abs(b-i) != 0){
        ans = __gcd(ans, abs(b-i));
      }
    }
    cout << ans << endl;
  }
  return 0;
}