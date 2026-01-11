#include <iostream>
#include <string>
using namespace std;

int main() {
    int x;
    cin >> x;

    string s = to_string(x);
    int n = s.size();

    for (int i = 0; i < n; i++) {
        // Do not change first digit if it becomes 0
        if (i == 0 && s[i] == '9') continue;

        if (s[i] >= '5') {
            s[i] = '9' - s[i] + '0';
        }
    }

    int num = stoi(s);
    cout << num << endl;
}
