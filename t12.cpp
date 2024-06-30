#include <bits/stdc++.h>

using namespace std;

int massive[15][15];


void rec(int i, int j){
    if(massive[i][j + 1] == 1){
        massive[i][j + 1] = 0;
        rec(i, j + 1);
    }
    if(massive[i - 1][j] == 1){
        massive[i - 1][j] = 0;
        rec(i - 1, j);
    }
    if(massive[i][j - 1] == 1){
        massive[i][j - 1] = 0;
        rec(i, j - 1);
    }
    if(massive[i + 1][j] == 1){
        massive[i + 1][j] = 0;
        rec(i + 1, j);
    }
}

int main(){
    
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            char a;
            cin >> a;
            massive[i][j] = a - '0';
        }
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(massive[i][j] == 1){
                rec(i, j);
                cnt++;
            }
        }
    }
    if(cnt != 0)
    cout << cnt;
    else cout << "nothing is left";

    return 0;
}