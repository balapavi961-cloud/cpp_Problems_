#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    int k = 3;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(3);
    v.push_back(5);
    v.push_back(3);

    int count = count_if(v.begin(),v.end(),[k](int x){return x == k;});
    cout << count;
    return 0;
}