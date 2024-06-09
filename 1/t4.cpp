#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // 12 

    // 3 

    // 12 % 2 = 0   3
    // // 12 / 2 = 6

    // 6 % 2 = 0    2
    // // 6 / 2 = 3

    // 3 % 2 = 1    1
    // // 3 / 2 = 1

    // 1 % 2 = 1    0
    // // 1 / 2 = 0
    // 1100 -> 12

    // 0011 = 1 * 2 ^ 0 + 1 * 2 ^ 1 + 0 * 2 ^ 2 + 0 * 2 ^ 3 = 1 * 2 ^ 0 + 1 * 2 ^ 1 = 1 + 2 = 3
    // 3210 
    // return 0;


    int x;
    cin >> x;

    int res = 0;
    res = res + (x % 2) * 8;
    x = x / 2;

    res = res + (x % 2) * 4;
    x = x / 2;

    res = res + (x % 2) * 2;
    x = x / 2;

    res = res + (x % 2) * 1;
    x = x / 2;

    cout << res;
}