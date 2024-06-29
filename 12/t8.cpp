#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int cnt = 0;
    int massive[n];
    for(int i = 0; i < n; i++){
        cin >> massive[i];
        if(massive[i] != 0){
            cout << massive[i] << " ";
        } else{
            cnt++;
        }
    }

    for(int i = 0; i < cnt; i++){
        cout << 0 << " ";
    }

    return 0;
}