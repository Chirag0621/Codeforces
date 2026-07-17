#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin >> t;
 
    while (t--) {
        int k;
        cin >> k;
 
        vector<int> a(k);
        for (int i = 0; i < k; i++) {
            cin >> a[i];
        }
 
        int count2 = 0;
        for (int x : a) {
            if (x == 2) count2++;
        }
 
        if (*max_element(a.begin(), a.end()) > 2 || count2 > 1) {
            cout << "YES
";
        } else {
            cout << "NO
";
        }
    }
 
    return 0;
}