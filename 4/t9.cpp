#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int massive1[n];
    for(int i = 0; i < n; i++){
        cin >> massive1[i];
    }

    int m;
    cin >> m;
    int massive2[m];
    for(int i = 0; i < m; i++){
        cin >> massive2[i];
    }

    int massive3[n + m];
    for(int i = 0; i < n; i++){
        massive3[i] = massive1[i];
    }

    for(int i = n; i < n + m; i++){
        massive3[i] = massive2[i - n];
    }

    sort(massive3, massive3 + n + m);

    for(int i = 0; i < n + m; i++){
        cout << massive3[i] << " ";
    }

    return 0;
}