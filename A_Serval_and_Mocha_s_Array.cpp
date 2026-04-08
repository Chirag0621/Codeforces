#include<iostream>
#include<vector>
using namespace std;

long long findGCD(long long a, long long b){
  if(b == 0){
    return a;
  }
  findGCD(b, a % b);
}

int main(){
  int t;
  cin >> t;
  while(t--){
    long long n;
    cin >> n;
    vector<long long> a(n);
    for(long long i = 0; i < n ; i++){
      cin >> a[i];
    }

    bool flag = false;

    for(long long i = 0; i < n ; i++){
      for(long long j = i+1; j < n; j++){
        if(findGCD(a[i], a[j]) <= 2){
          flag = true;
          break;
        }
      }
    }
    if(flag){
      cout<<"Yes"<<"\n";
    }
    else{
      cout<<"No"<<"\n";
    }
  }
  return 0;
}