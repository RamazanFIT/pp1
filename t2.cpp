#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n; // vnis po vert
    int m; // po hori vpravo
    cin >> n >> m;
    int massive[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> massive[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            
            cout << massive[i][j] << " ";
        }
        cout << endl;
    }

    cout << massive[n - 1][m - 1];
    // cout << massive[0][0];
    // 1432 4324 23 423 
    // 324  3423 4234 43
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cout << "[ " << i << " " << j << " ]";
    //     }
    //     cout << endl;
    // }
    
    

    return 0;
}