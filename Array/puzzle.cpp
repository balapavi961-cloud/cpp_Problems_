#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> f(m);
    for(int i = 0; i < m; i++) {
        cin >> f[i];
    }

    // Sort the puzzle sizes
    sort(f.begin(), f.end());

    int minDiff = INT_MAX;

    // Sliding window of size n
    for(int i = 0; i <= m - n; i++) {
        int diff = f[i + n - 1] - f[i];
        minDiff = min(minDiff, diff);
    }

    cout << minDiff << endl;

    return 0;
}
