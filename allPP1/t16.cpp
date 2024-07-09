#include <bits/stdc++.h>

using namespace std;

int main(){
    // 4
    // 1...
    // .2..
    // ..3.
    // ...4
    
    int n;
    cin >> n;
    int cnt = n;
    int massive[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            massive[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                massive[i][j] = cnt;
                cnt--;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(massive[i][j] == 0){
                cout << '.';
            } else
                cout << massive[i][j];
        }
        cout << endl;
    }

    return 0;
}