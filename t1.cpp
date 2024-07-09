#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // 5 6

    // 23 45 435 34 2

    int n, k;
    cin >> n >> k;

    int sum = 0;
    for(int i = 0; i < n; i++){
        int el;
        cin >> el;
        sum += el;
    }

    // | -1 | = 1

    // abs(-1) = 1

    cout << abs(sum / n - k);

    return 0;
}