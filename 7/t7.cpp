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

    cout << "coordinates of min elements:" << endl;
    int sum = 0;
    for(int j = 0; j < m; j++){
        int minimum = INT_MAX;

        for(int i = 0; i < n; i++){
            minimum = min(minimum, massive[i][j]);
        }

        for(int i = 0; i < n; i++){
            if(massive[i][j] == minimum){
                cout << i + 1<< ";" << j + 1 << endl;
                sum += massive[i][j];
                break;
            }
        }
    }
    cout << endl;
    cout << "Their sum:" << endl;
    cout << sum;

    return 0;
}