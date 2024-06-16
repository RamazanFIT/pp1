#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // int n;
    // cin >> n;

    // n = n * n;

    // int massive[n];
    // int maxx = INT_MIN;
    // for(int i = 0; i < n; i++){
    //     cin >> massive[i];
    //     maxx = max(maxx, massive[i]);
    // }
    // // sort(massive, massive + n);
    // // cout << massive[n - 1];

    // cout << maxx;

    int n;
    cin >> n;

    int massive[n][n];
    int maxx = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> massive[i][j];
            // maxx = max(maxx, massive[i][j]);
            if(maxx < massive[i][j]){
                maxx = massive[i][j];
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(massive[i][j] == maxx){
                massive[i][j] = INT_MIN;
            }
        }
    }
    maxx = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){

            if(maxx < massive[i][j]){
                maxx = massive[i][j];
            }
        }
    }
    if(maxx == INT_MIN){
        cout << 0;
    } else cout << maxx;
    

    return 0;
}