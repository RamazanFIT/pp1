#include <bits/stdc++.h>

using namespace std;

int main(){
    // 4

    // ...1
    // ..2.
    // .3..
    // 4...

    // cnt = 1

    // 2
    // 3
    // 4


    // 0 3 = 3
    // 1 2 = 3
    // 2 1 = 3
    // 3 0 = 3

    // i + j == n - 1

    int n;
    cin >> n;

    int massive[n][n];

    int cnt = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            massive[i][j] = 0;
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