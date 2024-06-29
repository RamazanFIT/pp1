#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int k;
    cin >> k;

    int massive[n];

    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }

    // 134568
    // 8 6 5 4 3 1
    sort(massive, massive + n);

    reverse(massive, massive + n);

    cout << massive[k - 1];

    return 0;
}