#include <bits/stdc++.h>

using namespace std;

int main(){
    
    //     11 =  6 * 2 - 1
    // 6 
    int n;
    cin >> n;

    char massive[n][2 * n - 1];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2 * n - 1; j++){
            massive[i][j] = '.';
        }
    }
    int index = n - 1;
    int odd = 1;
    for(int i = 0; i < n; i++){
        for(int j = index; j < index + odd; j++){
            massive[i][j] = '*';
        }
        odd += 2;  // 4   4 + 3
        index--;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2 * n - 1; j++){
            cout << massive[i][j];
        }
        cout << endl;
    }

    return 0;
}