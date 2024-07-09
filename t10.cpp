#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // n n 

    // 1 2 3
    // 4 5 6 
    // 7 8 9
    int n;
    cin >> n;

    int massive[n][n];

    for(int  i = 0; i <n; i++){
        for(int j = 0; j < n; j++){
            cin >> massive[i][j];
        }
    }

    for(int  i = 0; i <n; i++){
        for(int j = 0; j < n; j++){
            if(massive[i][j] != massive[j][i]){
                cout << "Not perfect";
                return 0;
            }
        }
    }
    // alma jojo roma 

    // alma koko lolo 

    cout << "Perfect";


    return 0;
}