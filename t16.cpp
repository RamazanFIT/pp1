#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    int l, r;
    cin >> l >> r;

    // 1 10 

    map<int, int> mapa;

    for(int i = 0; i < n; i++){
        int el;
        cin >> el;

        mapa[el] = 1;
    }

    for(int i = l; i <= r; i++){
        if(mapa[i] != 1){
            cout << i << " ";
        }
    }

    return 0;
}