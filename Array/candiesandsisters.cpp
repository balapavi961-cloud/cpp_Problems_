#include <iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin >> t;
 
    while (t--) {
        long long n;
        cin >> n;
 
        if (n <= 2) {
            cout << 0 << "\n";
        } else {
            cout << (n - 1) / 2 << "\n";
        }
    }
 
    return 0;
}