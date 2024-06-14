#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int massive[n];
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    // 5 
    // 0 1 2 3 4 
    // reverse(massive, massive + n);

    // for(int i = 0 ; i< n ;i++){
    //     cout << massive[i] << " ";
    // }

    for(int i = n - 1; i >= 0; i--) cout << massive[i] << " ";

    // if(5 < 3) cout << "Dilnaz";
    // else cout << "Roma";
    // for(int i = 0; i < 10; i++)
    //     cout << i << " ";

    return 0;
}