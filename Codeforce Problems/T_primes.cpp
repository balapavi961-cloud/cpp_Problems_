#include <bits/stdc++.h>
using namespace std;
 
const int MAX = 1000000;
 
int main() {
    vector<bool> isPrime(MAX + 1, true);
    isPrime[0] = isPrime[1] = false;
 
    for (int i = 2; i * i <= MAX; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= MAX; j += i) {
                isPrime[j] = false;
            }
        }
    }
 
    int n;
    cin >> n;
 
    while (n--) {
        long long x;
        cin >> x;
 
        if (x < 4) {
            cout << "NO\n";
            continue;
        }
 
        long long root = sqrt(x);
        if (root * root == x && isPrime[root]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
 
    return 0;
}