#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int m , k;
        cin >> m;
        cin >> k;
        int arr[m];
        for(int j=0;j<m;j++){
            cin >> arr[j];
        }
        int c = 0;
        for(int l=0;l<m;l++){
            if(arr[l] == k){
                c++;
            }
        }
        if(c > 0) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}