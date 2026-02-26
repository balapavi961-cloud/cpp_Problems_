#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        long long x, y;
        cin >> x >> y;
 
        long long a, b;
        cin >> a >> b;
 
        long long answer;
 
        if (b < 2 * a) {
            long long m = min(x, y);
            answer = m * b + (abs(x - y) * a);
        } else {
            answer = (x + y) * a;
        }
 
        cout << answer << "\n";
    }
 
    return 0;
}