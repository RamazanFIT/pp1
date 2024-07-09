#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    int x;
    cin >> x;

    int massive[n][n];
    int maximum = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> massive[i][j];
            // maximum = max(maximum, massive[i][j]);
            if(massive[i][j] > maximum){
                maximum = massive[i][j];
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(massive[i][j] == maximum){
                massive[i][j] = x;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << massive[i][j] << " ";
        }
        cout << endl;
    }
// 3 -1

// 1 3 2 
// 3 2 1
// 3 3 3

// 1 -1 2 
// -1 2 1 
// -1 -1 -1 

    return 0;
}