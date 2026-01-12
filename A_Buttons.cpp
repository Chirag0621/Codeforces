#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    long long a,b,c;
    cin>>a>>b>>c;
    if(c%2==1){ //case -Odd;
      if(b>a){
        cout<<"Second"<<'\n';
      }
      else {
        cout<<"First"<<'\n';
      }
    }
    else{ // Case -Even;
      if(a>b){
        cout<<"First"<<'\n';
      }
      else{
        cout<<"Second"<<'\n';
      }
    }

  }
  return 0;
}