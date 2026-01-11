#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int k;
    cin>>k;
    unordered_map<int,int> mp;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
      cin>>arr[i];
      mp[arr[i]]++;
    }
    auto it=mp.find(k);
    if(it !=mp.end()){
      
        cout<<"YES"<<'\n';
      

    }
    else{
      cout<<"NO"<<"\n";
    }
    
  }
  return 0;
}