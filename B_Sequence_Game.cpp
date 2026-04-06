#include <iostream>
#include<vector>
using namespace std;

int main() {
    int cases;
    cin>>cases;
    while(cases--){
      long long n;
      cin >> n;
      vector<long long> arr(n);
      for(long long i =0; i < n; i++){
        cin >> arr[i];
      }
      vector<long long> ans;
      ans.push_back(arr[0]);
      for(long long i =1; i < n; i++){
        if(arr[i] >= arr[i - 1]){
          ans.push_back(arr[i]);
        }
        else{
          ans.push_back(min(arr[i], arr[i-1]));
          ans.push_back(arr[i]);
        }
      }
      cout << ans.size() << "\n";
      for(auto i : ans)
      {
        cout<< i << " ";
      }
      cout << "\n";
    }
    return 0;
}