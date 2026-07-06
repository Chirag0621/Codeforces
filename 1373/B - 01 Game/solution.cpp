#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin >> t;
 
    while(t--){
        string s;
        cin >> s;
        int n = s.length();
        int cnt0 = 0;
        int cnt1 = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '1') cnt1++;
            else cnt0++;
        }
        int opn = min(cnt0, cnt1);
 
        if(opn % 2 != 0){
            cout << "DA" <<"
";
        }
        else {
            cout << "NET" <<"
";
        }
    }
}