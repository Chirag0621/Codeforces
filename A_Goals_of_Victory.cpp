#include<iostream>
#include<vector>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> arr(n-1);
    long long sum=0;
    for(int i=0;i<n-1;i++){
      cin>>arr[i];
      sum+=arr[i];
    }
    if(sum<0){
      sum=abs(sum);
      cout<<sum<<'\n';

    }
    else{
      cout<<-sum<<'\n';
    }
  }
  return 0;
}