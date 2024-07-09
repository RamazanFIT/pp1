#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    int m;
    cin >> m;

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cout << "(" << i << ", " << j << ") "; 
    //     }
    //     cout << endl;
    // }

    int massive[n][m];

            //  v   h
    
    for(int i = 0; i < n; i++){
        for(int j =0 ; j < m; j++){
            massive[i][j] = i +;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j =0 ; j < m; j++){
            cout << massive[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}