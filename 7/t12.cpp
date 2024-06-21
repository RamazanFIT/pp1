#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;cin>>n;

    int cnt = 1;

    int massive[n][n];
    int k = 0;
    while(cnt <= n * n){
        for(int i = k; i < n - k; i++){
            massive[k][i] = cnt++;
        }
        for(int i = k + 1; i < n - k; i++){
            massive[i][n - 1 - k] = cnt++;
        }
        for(int i = n - 2 - k; i >= k; i--){
            massive[n - 1 - k][i] = cnt++;
        }
        for(int i = n - 2 - k; i > k; i--){
            massive[i][k] = cnt++;
        }
        k++;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << massive[i][j] << " ";
        } 
        cout << endl;
    }

    return 0;
}