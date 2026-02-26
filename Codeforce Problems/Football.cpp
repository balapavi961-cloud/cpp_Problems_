#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> goals;
    string team;

    for (int i = 0; i < n; i++) {
        cin >> team;
        goals[team]++;
    }

    string winner;
    int maxGoals = 0;

    for (auto &entry : goals) {
        if (entry.second > maxGoals) {
            maxGoals = entry.second;
            winner = entry.first;
        }
    }

    cout << winner << endl;

    return 0;
}
