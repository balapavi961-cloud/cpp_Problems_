#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
 
    vector<long long> b(n);
 
    for(int i = 0; i < n; i++)
        cin >> b[i];
 
    long long minVal = *min_element(b.begin(), b.end());
    long long maxVal = *max_element(b.begin(), b.end());
 
    if(minVal == maxVal) {
        long long ways = n * (n - 1) / 2;
        cout << 0 << " " << ways;
    } 
    else {
        long long countMin = 0, countMax = 0;
 
        for(int i = 0; i < n; i++) {
            if(b[i] == minVal) countMin++;
            if(b[i] == maxVal) countMax++;
        }
 
        cout << (maxVal - minVal) << " " << (countMin * countMax);
    }
 
    return 0;
}