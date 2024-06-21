#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, m;
    cin >> n >> m;
    int massive[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> massive[i][j];
        }
    }
    int cnt = 1;
    for(int i = 0; i < n; i++){

        int sum = 0;

        for(int j = 0; j < m; j++){
            sum += massive[i][j];
        }

        cout << "The sum of row number " << cnt << " is " << sum << endl;
        cnt++;

    }

    cnt = 1;

    for(int j = 0; j < m; j++){

        int sum = 0;

        for(int i = 0; i < n; i++){
            sum += massive[i][j];
        }
        cout << "The sum of column number " << cnt << " is " << sum << endl;
        cnt++;
    }

    return 0;
}