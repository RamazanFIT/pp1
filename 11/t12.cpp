#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int massive[n];
    int minimum = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> massive[i];
        minimum = min(minimum, massive[i]);
    }
    for(int i = 0; i < n; i++){
        if(minimum == massive[i]){
            massive[i] = INT_MAX;
        }
    }

    minimum = INT_MAX;

    for(int i = 0; i < n; i++){
        minimum = min(minimum, massive[i]);

    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(massive[i] == minimum){
            cnt++;
        }

    }
    cout << cnt;

    return 0;
}