#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int m;
    cin >> m;
    int cnt = 0;
    int massive[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            cin >> massive[i][j];
            if(massive[i][j] < 0) cnt++;
        }
    
    cout << cnt;

    return 0;
}