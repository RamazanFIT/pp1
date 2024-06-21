#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int massive[n][n];
    int maximum = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> massive[i][j];
            if(massive[i][j] > maximum){
                maximum = massive[i][j];
            }
            // maximum = max(maximum, massive[i][j]);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(maximum == massive[i][j]){
                cout << i + 1 << " " << j + 1;
                return 0;
            }
        }
    }

    

    return 0;
}