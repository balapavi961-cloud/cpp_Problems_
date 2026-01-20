#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    // If positive, best is the same number
    if (n >= 0) {
        cout << n << endl;
        return 0;
    }

    // Convert to string
    string s = to_string(n);

    // Option 1: Remove last digit
    string option1 = s.substr(0, s.size() - 1);

    // Option 2: Remove second last digit
    string option2 = s.substr(0, s.size() - 2) + s.back();

    // Convert back to numbers
    long long val1 = stoll(option1);
    long long val2 = stoll(option2);

    // Print maximum
    cout << max(val1, val2) << endl;

    return 0;
}
