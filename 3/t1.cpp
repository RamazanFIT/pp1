#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // int n;
    // cin >> n;
    // int massive[n];

    // for(int i = 0; i < n; i++){
    //     // int number;
    //     // cin >> number;
    //     // massive[i] = number;

    //     cin >> massive[i]; // getting the massive 
    // }

    // for(int i = 0; i < n; i++){
    //     if(massive[i] % 2 == 1){
    //         cout << massive[i] << " ";
    //     }
    // }

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int element;
        cin >> element;
        if(element % 2 == 1){
            cout << element << " ";
        }
    }

    return 0;
}