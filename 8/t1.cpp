#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // 0 3 
    // 0 1 2 3

    // 6238
    // 2 3 4 5 6 7 8

    // 2 3 6 8 
    // m[massive[i]]++;
    // 0 0 
    // 1 0 
    // 2 0  + 1
    // 3 0  + 1
    // 4 0 
    // 5 0 
    // 6 0  + 1
    // 7 0 
    // 8 0  + 1
    // 9 0

    int n;
    cin >> n;
    int abstr[200];

    for(int i = 0; i < 200 ;i++){
        abstr[i] = 0;
    }

    int massive[n];
    int minimum = INT_MAX;
    int maximum = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> massive[i];
        minimum = min(minimum, massive[i]);
        maximum = max(maximum, massive[i]);
        abstr[massive[i]]++;
    }

    int cnt = 0;

    for(int i = minimum; i <= maximum; i++){
        if(abstr[i] == 0) cnt++;
    }

    cout << cnt;

    return 0;
}