#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int n = s.length();
    vector<int> prefix(n, 0);
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1];
        if (s[i] == s[i - 1]) {
            prefix[i]++;
        }
    }
 
    int m;
    cin >> m;
 
    while (m--) {
        int l, r;
        cin >> l >> r;
        l--; 
        r--;
 
        cout << prefix[r] - prefix[l] << "\n";
    }
 
    return 0;
}