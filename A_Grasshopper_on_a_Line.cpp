#include<iostream>
using namespace std;

int main(){
  long long t ;
  cin >> t ;
  while( t-- ){
    long long x , k;
    cin >> x >> k;
    if(x % k != 0){
      cout << 1 << "\n";
      cout<< x << "\n";
    }
    else{
      cout << 2 << "\n";
      cout << x - 1 << " " << 1 << " \n";
    }
  }
  return 0;
}