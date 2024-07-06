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

    for(int j = 0; j < n; j++){
        for(int i = n - 1; i >= 0; i--){
            cout << massive[i][j] << " ";
        }
        cout << endl;
    }
    // 2 0 
    // 1 0 
    // 0 0 
    
    // 2 1
    // 1 1 
    // 0 1 
    return 0;
}
