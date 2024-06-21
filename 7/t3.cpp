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

    int min_sum = INT_MAX;

    for(int i = 0; i < n; i++){

        int sum = 0;

        for(int j = 0; j < m; j++){
            sum += massive[i][j];
        }

        min_sum = min(min_sum, sum);
    }

    for(int i = 0; i < n; i++){

        int sum = 0;

        for(int j = 0; j < m; j++){
            sum += massive[i][j];
        }

        if(sum == min_sum){
            cout << i + 1;
            return 0;
        }
    }

   

    return 0;
}