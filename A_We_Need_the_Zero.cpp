#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; // Number of test cases
    cin >> t;
    while (t--)
    {
        long long n; // Length of the array
        cin >> n;
        long long a[n]; // Array to store the elements
        long long Xora = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            Xora = Xora ^ a[i];
        } // Loop to input array elements
        if (n % 2 == 1)
        {
            cout << Xora << "\n";
        }
        else
        {
            if (Xora == 0)
                cout << 0 << "\n";
            else
                cout << -1 << "\n";
        }
    }
    return 0;
}

// Time Complexity (TC): O(n) = O(1000)
// Space Complexity (SC): O(n) = O(1000)