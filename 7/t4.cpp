#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, m;cin >> n >> m;

    // n
    // if(sqrt(n) * sqrt(n) == n)
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         int element;
    //         cin >> element;

    //         if(sqrt(element) * sqrt(element) == element){
    //             cout << sqrt(element) << " ";
    //         } else{
    //             cout << element << " ";
    //         }
    //     }
    //     cout << endl;
    // }
    int massive[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> massive[i][j];
            int sqrt_of_m = sqrt(massive[i][j]);
            if(sqrt_of_m * sqrt_of_m == massive[i][j]){
                cout << sqrt_of_m << " ";
            } else{
                cout << massive[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}