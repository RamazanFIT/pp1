#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    int massive[n][n];

    for(int i = 0; i < n; i++){
        massive[0][i] = i;
        massive[i][0] = i;
    }

    // 0 1 2 3 
    // 1 1 2 3 
    // 2 2 4 6 
    // 3 3 6 9 
    for(int i = 1; i < n; i++){
        for(int j = 1; j < n; j++){
            massive[i][j] = massive[0][j] * massive[i][0];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << massive[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}