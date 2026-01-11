#include <bits/stdc++.h>
using namespace std;
using ll = long long;

unordered_map<long long, long long> memo;

long long solve_bruteforce(long long m) {
    if (m <= 2) return 0;
    if (memo.count(m)) return memo[m];
    long long best = 0;
    // enumerate m1 and m2 with 1 <= m1 <= m2 <= m3
    for (long long m1 = 1; m1 <= m/3; ++m1) {
        // m2 must be at least m1 and at most (m - m1) / 2 to ensure m2 <= m3
        for (long long m2 = m1; m2 <= (m - m1) / 2; ++m2) {
            long long m3 = m - m1 - m2;
            if (m2 <= m3) {
                long long val = m1 + solve_bruteforce(m3);
                if (val > best) best = val;
            }
        }
    }
    memo[m] = best;
    return best;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n; cin >> n;
        cout << solve_bruteforce(n) << '\n';
    }
    return 0;
}
