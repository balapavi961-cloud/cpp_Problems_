#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        int operations = 0;

        // Try up to a reasonable limit (since x doubles every time)
        while (x.size() <= 100) {
            if (x.find(s) != string::npos) {
                cout << operations << "\n";
                break;
            }
            x += x;
            operations++;
        }

        // If not found
        if (x.find(s) == string::npos) {
            cout << -1 << "\n";
        }
    }

    return 0;
}
