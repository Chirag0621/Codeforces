#include<iostream>
#include<vector>
using namespace std;
int main(){
  long long t ; 
  cin >> t;
  while( t-- ){
    long long n;
    cin >> n;
    vector<int> a(n);
    for(int i =0; i < n ; i++){
      cin >> a[i];
    }
    if(n == 1){
      cout << a[0]<<"\n";
    }
    else{
      for(long long i =0; i < n ; i++){
        cout<< (n+1) - a[i] << " ";
        
      }
      cout<<"\n";
    }
  }
  return 0;
}