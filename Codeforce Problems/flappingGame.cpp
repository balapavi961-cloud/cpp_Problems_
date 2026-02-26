#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ones = 0;
    int max_sum = -1000, current_sum = 0;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if(x == 1) {
            ones++;
            x = -1;
        } else {
            x = 1;
        }

        current_sum = max(x, current_sum + x);
        max_sum = max(max_sum, current_sum);
    }

    cout << ones + max_sum << endl;

    return 0;
}
