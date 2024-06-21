#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int massive[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> massive[i][j];
        }
    }
    int cnt = 1;
    for(int k = n - 1; k >= 0; k--){
        for(int i = 0; i < cnt; i++){
            cout << massive[0 + i][k + i] << " ";
        }
        cout << endl;
        cnt++;
    }
    cnt = n - 1;
    for(int i = 1; i < n; i++){
        for(int j = 0; j < cnt; j++){
            cout << massive[i + j][0 + j] << " ";
        }
        cout << endl;
        cnt--;
    }
    return 0;
}

// 0 2  - 0 2  =  0 0
// 1 3  - 0 2  =  1 1

// 1 0 - 1 0 = 0 0 
// 2 1 - 1 0 = 1 1
// 3 2 - 1 0 = 2 2