#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        
        int count = 0;
        if(a < b) count++;
        if(a < c) count++;
        if(a < d) count++;
        
        cout << count << "\n";
    }
}