#include <bits/stdc++.h>

using namespace std;

int main(){
    // 5 


    // 1
    // 11
    // 111
    // 1111
    // 11111

    // int cnt = 1;
    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i + 1; j++){
            cout << 1;
        } 
        cout << endl;
        // cnt++;
    }

    return 0;
}