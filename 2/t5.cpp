#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    int b1 = n % 2;
    n = n / 2;
    // n /= 2;
    int b2 = n % 2;
    n /= 2;
    int b3 = n % 2;
    n /= 2;
    int b4 = n % 2;
    n /= 2;

    // b4b3b2b1 normal
    //  b1b2b3b4 reversed
        // 4 3 2 1 0
    int result = b4 * 1 + b3 * 2 + b2 * 4 + b1 * 8;

    cout << result;


    return 0;
}