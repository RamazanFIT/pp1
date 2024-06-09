#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    for(int i = 1; i <= n; i = i * 2){
        cout << i << " ";
    }

    // int cnt = 0;
    // while(n > 0){
    //     cnt++;
    //     n /= 2;
    // }
    // for(int i = 0; i < cnt; i++){
    //     cout << pow(2, i) << " ";
    // }

    return 0;
}