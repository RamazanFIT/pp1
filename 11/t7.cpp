#include <bits/stdc++.h>

using namespace std;

int main(){
    // k = 2
    // 0 1 (0 + 1 * 2) = 2
    // 0 1 2 

    int m, k;
    cin >> k >> m;

    // 0 1 1 2 3

    int a = 0;
    int b = 1;
    int c;
    for(int i = 0; i < m; i++){

        c = b;
        b = a + k * b;
        a = c;
    }
    // 0 1 2 3 5 8 13 21 34 55 
    // cout << b;
    // cout << a << " " << b << " " << a + b;
    cout << b % 10;
    
    return 0;
}