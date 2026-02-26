#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m;

    for (int i = 0; i < m; i++) {
        long long n, k, x;
        cin >> n >> k >> x;

        long long a = (k * (k + 1)) / 2;                 // min sum
        long long b = (k * (2 * n - k + 1)) / 2;       // max sum

        if (x >= a && x <= b)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
