#include <bits/stdc++.h>

using namespace std;

int main(){
    
    map<int, int> mapa;

    int l, r;
    cin >> l >> r;

    int x;

    while(cin >> x){
        mapa[x] = mapa[x] + 1;
    }

    for(int i = l; i <= r; i++){
        if(mapa[i] == 0){
            cout << i << " ";
        }
    }

    return 0;
}