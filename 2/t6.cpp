#include <bits/stdc++.h>

using namespace std;

int main(){
    
// Input

// 3 2

// Output

// 3

// Input

// 4 8

// Output

// 2

    // 3 steaks 

    // 0 -> 2

    // 10  2 

    // 10 / 2 * 2 = 10

    // 10 3

    // 10 % 3 = 1

    // 9 - 3 = 6

    // 6 / 2 * 2 = 6 min 

    // 4 steaks -> 3 min 

    // 9 min 

    // 4 8

    // steaks <= k -> 2min

    int n, k;
    cin >> n >> k;
    // 11 / 2  = 5

    // 6 
    if(n <= k){
        cout << 2;
    } else{
        int ost = n % k;
        if(ost <= k / 2){
            int result = max(n - ost - k, 0);
            cout << 3 + (result / k) * 2;
        } else{
            cout << (n / k + (n % k > 0)) * 2;
        }
    }

    // 9 2 = 9

    // 9 % 2 = 1

    // 9 - 1 = 8

    // 8 - 2 = 6

    // (6 / 2) * 2 = 6 + 3 = 9
    
    // 3 min 

    return 0;
}