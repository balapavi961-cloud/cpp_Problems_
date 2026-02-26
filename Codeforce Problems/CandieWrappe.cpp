#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        for (int k = 2; k <= 31; k++) {
            long long val = (1LL << k) - 1;  // 2^k - 1

            if (n % val == 0) {
                cout << n / val << "\n";
                break;
            }
        }
    }

    return 0;
}
