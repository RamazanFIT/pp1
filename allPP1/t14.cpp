#include <bits/stdc++.h>

using namespace std;

int main(){
    // //  n
    // *******
    // *     *
    // *     *
    // *     *  //n
    // *     *
    // *     *
    // *******

    int n;
    cin >> n;

    char massive[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            massive[i][j] = ' ';
            if(i == j or i + j == n - 1){
                massive[i][j] = '*';
            }
        }
    }

    for(int i = 0; i < n; i++){
        massive[0][i] = '*';
        massive[n - 1][i] = '*';
    }

    for(int i = 0; i < n; i++){
        massive[i][0] = '*';
        massive[i][n - 1] = '*';
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << massive[i][j];
        }
        cout << endl;
    }

// *****
// ** **
// * * *
// ** **
// *****

// *****
// ** **
// * * *
// ** **
// *****
    return 0;
}