
#include <iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, m;
    cin >> n >> m;
 
    long long time = 0;
    int current = 1;
 
    for (int i = 0; i < m; i++) {
        int next;
        cin >> next;
 
        if (next >= current) {
            time += next - current;
        } else {
            time += (n - current) + next;
        }
 
        current = next;
    }
 
    cout << time << "\n";
 
    return 0;
}