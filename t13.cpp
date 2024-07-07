#include <bits/stdc++.h>

using namespace std;

int main(){
    
    

    // 5

    // 1 3 7 2 0

    // 4 5 6 

    map<int, int> mapa;

    int n;
    cin >> n;
    int maximum = INT_MIN;
    for(int i = 0; i < n; i++){
        int el;
        cin >> el;
        maximum = max(maximum, el);
        mapa[el]++;
    }
    for(int i = 0; i <= maximum; i++){
        if(mapa[i] == 0) {
            cout << i << " ";
        }
    }

    return 0;
}