#include <iostream>
#include <unordered_map>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while(t--) {
        int n;
        cin >> n;
 
        unordered_map<long long, long long> mp;
        long long ans = 0;
 
        for(int i = 1; i <= n; i++) {
            long long x;
            cin >> x;
 
            long long key = x - i;
            mp[key]++;
        }
 
        for(auto &it : mp) {
            long long freq = it.second;
            ans += freq * (freq - 1) / 2;
        }
 
        cout << ans << "\n";
    }
 
    return 0;
}