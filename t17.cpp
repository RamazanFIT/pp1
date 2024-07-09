#include <bits/stdc++.h>

using namespace std;

int main(){
    // 3 4

    // 1 2 3 10
    // 4 5 6 11
    // 7 8 9 12
    
    // 12 9 8 7
    // 11 6 5 4
    // 10 3 2 1

    // 2 3 
    // 2 2 
    // 2 1 
    // 2 0 

    // 1 3
    // 1 2 
    // 1 1 
    // 1 0

    // for(int i = n - 1;i >= 0; i--){
    //     for(int j = m - 1; j >= 0; j--){
    //         cout << mass[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    int n, m;
    cin >> n >> m;
    int massive[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> massive[i][j];
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = n - 1; j >= 0; j--){
            cout << massive[j][i] << " ";
        }
        cout << endl;
    }
//     3 4

//     1 2 3 10
//     4 5 6 11
//     7 8 9 12
// 7 4 1 
// 8 5 2 
// 9 6 3 
// 12 11 10 
    // 2 0
    // 1 0 
    // 0 0 

    // 2 1
    // 1 1
    // 0 1

    // 7 4 1
    // 8 5 2
    // 9 6 3 
    // 12 11 10


    return 0;
}