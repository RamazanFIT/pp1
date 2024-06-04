#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    int massive[n]; 

    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }

    sort(massive, massive + n);
    // 4534 43 23 2 

    // 2 23 43 4534

    cout << massive[n - 1];

    // int maximum = INT_MIN;  

    // // 1 2

    // for(int i = 0; i < n; i++){
    //     cin >> massive[i];

    //     // if(massive[i] > maximum){
    //     //     maximum = massive[i];
    //     // }

    //     maximum = max(massive[i], maximum);
    //     // new one                   old version

    // }
    // cout << maximum;



    return 0;
}