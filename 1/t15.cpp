#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    n = sqrt(n);

    // for(int i = 1; i <= n; i++){
    //     // cout << i * i << endl;
    //     cout << pow(i, 2) << endl;
    // }
    int i = 1;
    while(i <= n){
        cout << pow(i, 2) << endl;
        i++;
    }

    return 0;
}