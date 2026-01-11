#include <iostream>
#include <vector>
#include <climits>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> arr(n);

    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long mini = LLONG_MAX;

    for (long long i = 0; i < n; i++) {
        mini = min(mini, llabs(arr[i]));
    }

    cout << mini << '\n';
    return 0;
}
