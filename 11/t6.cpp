#include <bits/stdc++.h>

using namespace std;

void f(){
    int chess[8][8];

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            chess[i][j] = 0;
        }
    }

    int n;
    cin >> n;
    
    string mass[n];

    for(int i = 0; i < n; i++){
        cin >> mass[i];
        int x, y;

        // x = 'B';
        // 'B' - 'A' = 1 
        // 'A' - 'A' = 0
        // 'C' - 'A' = 2
        x = mass[i][0] - 'A';
        y = mass[i][1] - '0' - 1;

        // '1' -> 1 
        // '0'
        // '1' - '0' = 49 - 48 = 1
        chess[x][y] = 1;
    }

    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(chess[i][j] == 0)
            cout << chess[i][j];
            else 
            cout << '*';
        }
        cout << endl;
    }


}

int main(){
    
    f();


    return 0;
}