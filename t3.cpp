#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // int a;
    // int b;

    int a, b;

    // cin >> a;
    // cin >> b;

    cin >> a >> b;


    int res = 0;

    res = res + a;

    // b = b / 10;
    // b = b / 10;
    // b /= 10;
    res = res + b % 10;
    b /= 100;

    res = res + b;

    cout << res;

    // 12335352 % 10 = 2
    // 12335350

    // 234 / 10 = 23 

    // 23 / 10 = 2 


    return 0;
}