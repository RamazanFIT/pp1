#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int l;
    cin >> l;
    int r;
    cin >> r;
    int massive[n];
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }

    // 5 4 5
    // 7 5 8 11 7
//    1 2 3  4  5
    // 3 4
    long long sum = 0;
    // LLONG_MAX - 9223372036854775807
    // INT_MAX - 2147483647
    // l = l - 1;
    // r = r - 1;
    l--;
    r--;
    for(int i = l; i <= r; i++){
        sum = sum + massive[i];
    }
    cout << sum;

    return 0;
}