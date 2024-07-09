#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int l, r;
    cin >> l >> r;

    for(int i = l; i <= r; i++){
        int m = i % 7;

        if(m == 1 or m == 2 or m == 5) {
            cout << i << " ";

        } 

    }

    return 0;
}