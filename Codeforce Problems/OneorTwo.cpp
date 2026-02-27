#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        int totalTwos = 0;

        for(int i = 0; i < n; i++) {
            cin >> a[i];
            if(a[i] == 2) totalTwos++;
        }

        if(totalTwos % 2 != 0) {
            cout << -1 << endl;
            continue;
        }

        int required = totalTwos / 2;
        int countTwos = 0;
        int answer = -1;

        for(int i = 0; i < n - 1; i++) {
            if(a[i] == 2) countTwos++;
            if(countTwos == required) {
                answer = i + 1;  // because k is 1-based
                break;
            }
        }

        cout << answer << endl;
    }

    return 0;
}