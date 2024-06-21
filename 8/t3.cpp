#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int massive[n];
    int abstr[1001];
    for(int i = 0; i < 1001; i++){
        abstr[i] = 0;
    }
    for(int i = 0; i < n; i++){
        cin >> massive[i];
        abstr[massive[i]]++;
    }

    int maximum = INT_MIN;
    for(int i = 0; i < 1001; i++){
        maximum = max(maximum, abstr[i]);
    }

    for(int i = 1000; i >= 0; i--){
        if(maximum == abstr[i]){
            cout << i << " ";
        }
    }
    

    return 0;
}