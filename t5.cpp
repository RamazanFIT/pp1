#include <bits/stdc++.h>

using namespace std;

int main(){
    
    
// 3
// 7 4 1 
// 8 5 2 
// 9 6 3 
    int n;
    cin >> n;
    int massive[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> massive[i][j];
        }
    }

    for(int roma = n - 1; roma >= 0; roma--){
        for(int dilnaz = n - 1; dilnaz >= 0; dilnaz--){
            cout << massive[dilnaz][roma] << " ";
        }
        cout << endl;
    }
// 2 2
// 1 2
// 0 2 

// 2 1
// 1 1 
// 0 1

// 3 2 1
// 6 5 4
// 9 8 7
3 2 1 
6 5 4 
9 8 7 


    return 0;
}