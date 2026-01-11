#include<iostream>
using namespace std;
int main(){
  int X=0;
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    if(s=="X++"){
      X++;
    }
    else if(s=="X--"){
      X--;
    }
    else if(s=="++X"){
      ++X;
    }
    else{
      --X;
    }
  }
  cout<< X<<endl;
}