#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<int> h(n);
 
    for(int i = 0; i < n; i++)
        cin >> h[i];
 
    long long current_sum = 0;
 
    // Step 1: first window
    for(int i = 0; i < k; i++)
        current_sum += h[i];
 
    long long min_sum = current_sum;
    int index = 0; // 0-based index
 
    // Step 2: slide window
    for(int i = k; i < n; i++) {
        current_sum = current_sum - h[i - k] + h[i];
 
        if(current_sum < min_sum) {
            min_sum = current_sum;
            index = i - k + 1;
        }
    }
 
    cout << index + 1; // convert to 1-based
 
    return 0;
}