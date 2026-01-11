// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// int main(){
//   int t;
//   cin>>t;
//   while(t--){
//     int n;
//     cin>>n;
//     vector<int> arr(n);
//     for(int i=0;i<n;i++){
//       vector.push_back(0);
//     }
//     for(int i=0;i<n;i++){
//       if(arr[i]!=i+1 || arr[i]>n){
//         cout<<"NO"<<endl;
//         return 0;
//       }
//     }
//     for(int i=2;i<n;i++)
//     {
//       if(i+1>n) break;
//       if(arr[i-1]<arr[i] && arr[i]<arr[i+1]){
//         swap(arr[i],arr[i+1]);
//       }
//     }
//     if(is_sorted(arr.begin(), arr.end())){
//       cout<<"YES"<<endl;
//     }
//     else{
//       cout<<"NO"<<endl;
//     }
//   }
//   return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm> // For is_sorted and swap

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin>>n;
    long long arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    if(arr[0]==1){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
  }
  return 0;
}