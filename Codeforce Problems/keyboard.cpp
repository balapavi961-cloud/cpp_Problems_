#include <bits/stdc++.h>
using namespace std;

int main() {
    char dir;
    cin >> dir;

    string typed;
    cin >> typed;

    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";

    for (char c : typed) {
        int pos = keyboard.find(c);

        if (dir == 'L') {
            cout << keyboard[pos + 1];
        } else { // dir == 'R'
            cout << keyboard[pos - 1];
        }
    }

    return 0;
}
