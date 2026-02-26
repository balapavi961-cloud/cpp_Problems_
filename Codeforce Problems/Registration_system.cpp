#include <iostream>
#include <unordered_map>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    unordered_map<string, int> mp;
    string name;
 
    for(int i = 0; i < n; i++) {
        cin >> name;
 
        if(mp.find(name) == mp.end()) {
            cout << "OK\n";
            mp[name] = 1;
        } else {
            int count = mp[name];
            string newName = name + to_string(count);
            
            cout << newName << "\n";
            
            mp[name]++;
            mp[newName] = 1;
        }
    }
 
    return 0;
}