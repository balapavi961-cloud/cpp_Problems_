#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int hours = 0;
    int used = 0;
    int candles = a;

    while (candles > 0) {
        // Burn all current candles
        hours += candles;
        used += candles;

        // Make new candles from used ones
        candles = used / b;
        used = used % b;
    }

    cout << hours << endl;
    return 0;
}
