#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    int current = 0; // 'a' position
    int total_rotations = 0;
 
    for (char c : s) {
        int target = c - 'a';
        int diff = abs(current - target);
 
        total_rotations += min(diff, 26 - diff);
 
        current = target;
    }
 
    cout << total_rotations << endl;
 
    return 0;
}