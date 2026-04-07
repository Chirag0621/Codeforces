#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k, x;
        cin >> n >> k >> x;

        if (x != 1)
        {
            cout << "YES\n";
            cout << n << "\n";

            for (int i = 0; i < n; i++)
                cout << 1 << " ";

            cout << "\n";
            continue;
        }

        if (k == 1)
        {
            cout << "NO\n";
            continue;
        }

        if (n % 2 == 0)
        {
            cout << "YES\n";
            cout << n / 2 << "\n";

            for (int i = 0; i < n / 2; i++)
                cout << 2 << " ";

            cout << "\n";
        }
        else
        {
            if (k < 3)
            {
                cout << "NO\n";
                continue;
            }

            cout << "YES\n";
            cout << (n / 2) << "\n";

            for (int i = 0; i < n / 2 - 1; i++)
                cout << 2 << " ";

            cout << 3 << "\n";
        }
    }

    return 0;
}