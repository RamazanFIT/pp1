#include <bits/stdc++.h>

using namespace std;

int main(){
    // //   m
    // *******
    // *     *
    // *     *
    // *     *  //n
    // *     *
    // *     *
    // *******

    int n, m;
    cin >> n >> m;

    char massive[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            massive[i][j] = ' ';
        }
    }

    for(int i = 0; i < m; i++){
        massive[0][i] = '*';
        massive[n - 1][i] = '*';
    }

    for(int i = 0; i < n; i++){
        massive[i][0] = '*';
        massive[i][m - 1] = '*';
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << massive[i][j];
        }
        cout << endl;
    }




    return 0;
}