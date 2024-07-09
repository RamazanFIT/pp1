#include <bits/stdc++.h>

using namespace std;

int roma(int a, int b){
    return a + b;
}

void solution(){
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
}

int main(){
    
    // cout << f(1, 2);
    // int x, c;
    // cin >> x >> c;
    // cout << roma(x, c);
    solution();

    return 0;
}