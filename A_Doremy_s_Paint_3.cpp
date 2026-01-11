#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> arr(n);
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
      cin>>arr[i];
      mp[arr[i]]++;
    }
    if(mp.size()>2){
      cout<<"No"<<'\n';
    }
    else if(mp.size()==1){
      cout<<"Yes"<<'\n';
    }
    else if(mp.size()==2){
      auto it =mp.begin();
      int freq1= it->second;
      int freq2=(++it)->second;
      if(freq1==freq2){
        cout<<"Yes"<<'\n';
      }
      else if(n % 2 == 1 && abs(freq1 - freq2) == 1){
        cout<<"Yes"<<'\n';
      }
      else{
        cout<<"No"<<'\n';
      }
    }
  }
  return 0;
}