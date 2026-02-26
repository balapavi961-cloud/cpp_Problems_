#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        string s1,s2;
        cin >> s1;
        cin >> s2;
        
        char temp = s1[0];
        s1[0] = s2[0];
        s2[0] = temp;
        
        cout << s1 <<" " << s2 <<"\n";
    }
}