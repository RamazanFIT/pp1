#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    int massive[n];
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }

    long long sum = 0; // adding
    for(int i = 0; i < n; i++){
        sum = sum + massive[i];
        // sum += massive[i];
    }
    cout << sum;

    return 0;
}