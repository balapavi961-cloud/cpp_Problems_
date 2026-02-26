#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(5);
    v.push_back(35);
    int min = *min_element(v.begin(),v.end());
    int max = *max_element(v.begin(),v.end());
    cout << min << "\n";
    cout << max;
    return 0;
}