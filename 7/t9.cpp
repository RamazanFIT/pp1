#include <bits/stdc++.h>

using namespace std;

int main(){
    
    
    // i == j 

    int n;
    cin >> n;
    int massive[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> massive[i][j];
        }
    }
    int maximum = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                maximum = max(maximum, massive[i][j]);
            }
        }
    }
    cout << "Maximum element is: " << maximum << " with coordinates: ";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                if(maximum == massive[i][j]){

                    cout << i + 1 << ";" << j + 1;
                    return 0;
                }
            }
        }
    }


    return 0;
}