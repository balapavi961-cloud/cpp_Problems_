#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int h, m;
        cin >> h >> m;

        int currentMinutes = h * 60 + m;
        int remaining = 1440 - currentMinutes;

        cout << remaining << endl;
    }

    return 0;
}
