#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int massive[n];
    int maximum = INT_MIN; // -2147483647
    int minimum = INT_MAX; // 2147483647
    for(int i = 0; i < n; i++){
        cin >> massive[i];
        maximum = max(maximum, massive[i]);
        minimum = min(minimum, massive[i]);
    }

    // 5 5 5 
    // max = 9 
    // min = 5
    for(int i = 0; i < n; i++){
        if(maximum == massive[i]){
            massive[i] = minimum;
        }
    }

    for(int i = 0; i < n; i++){
        cout << massive[i] << " ";
    }



    return 0;
}