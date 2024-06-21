#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    int massive[n][n];
    // . = 0 

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            massive[i][j] = 0;
        }
    }

    // i + j == n - 1 
    int cnt = 1;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i + j == n - 1){
                massive[i][j] = cnt;
                cnt++;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            if(massive[i][j] != 0){
                cout << massive[i][j];
            } else{
                cout << ".";
            }
        }
        cout << endl;
    }
    
    
    return 0;
}