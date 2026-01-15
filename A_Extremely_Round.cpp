#include <iostream>
using namespace std;

int main() {

    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long cnt = 0;

        for (long long power = 1; power <= n; power *= 10) {
            for (long long d = 1; d <= 9; d++) {
                if (d * power <= n)
                    cnt++;
            }
        }

        cout << cnt << "\n";
    }
    return 0;
}
