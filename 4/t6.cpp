#include <bits/stdc++.h>

using namespace std;

int main(){
    

    // 5 4 5
    // 2 8 10 5 12
    // 1 2

    // 0 
    // 2 1
    // 2 + 1 5

    // int n, l, r;
    // cin >> n >> l >> r;

    // int massive[n];
    // for(int i = 0; i < n; i++){
    //     cin >> massive[i];
    // }
    // l--;
    // r--;

    // for(int i = 0; i < l; i++){
    //     cout << massive[i] << " ";
    // }
    // for(int i = r; i >= l; i--){
    //     cout << massive[i] << " ";
    // }
    // for(int i = r + 1; i < n; i++){
    //     cout << massive[i] << " ";
    // }

    int n, l, r;
    cin >> n >> l >> r;

    int massive[n];
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    l--;
    r--;

    reverse(massive + l, massive + r + 1);
    // reverse(massive, massive + n);

    for(int i = 0; i < n; i++){
        cout << massive[i] << " ";
    }

    return 0;
}