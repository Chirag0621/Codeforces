#include<iostream>
#include<vector>
using namespace std;
int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n, q;
        cin >> n >> q;
        vector<long long> arr(n + 1);
        for(int i = 1; i <= n ; i++){
            cin >> arr[i];
        }

        vector<long long> pSum(n + 1);
        for(int i = 1; i <= n ; i++){
            pSum[i] = pSum[i - 1] + arr[i];
        }


        while(q--){
            long long l, r, k;
            cin >> l >> r >> k;
            long long sum = pSum[l - 1] + pSum[n] - pSum[r] + k*(r - l + 1);
            if(sum % 2 != 0){
                cout<< "YES" <<"\n";
            }
            else{
                cout << "NO" << "\n";
            }
        }
    }
    return 0;
}