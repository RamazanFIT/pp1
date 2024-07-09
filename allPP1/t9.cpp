#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // n n 

    // 1 1 1 1
    // 3 3333
    // 5 5555

    int n;
    cin >> n;

    int massive[n][n];

    int cnt = 1;

    for(int i = 0; i <n ;i++){
        for(int j = 0; j < n; j++){
            massive[i][j] = cnt;
        }
        cnt += 2;
    }

    for(int i = 0 ; i <n ;i++){
        for(int j = 0; j < n; j++){
            cout << massive[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}