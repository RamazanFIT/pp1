#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // 5
    // 1 2 3 4 5
    // Output:
    // 2 4 5 3 1

    int n;
    cin >> n;

    vector<int> massive(n);

    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    
    for(int i = 0; i < n; i++){
        if(massive[i] % 2 == 0){
            cout << massive[i] << " ";
        }
    }

    for(int i = n - 1; i >= 0; i--){
        if(massive[i] % 2 != 0){
            cout << massive[i] << " ";
        }
    }

    return 0;
}