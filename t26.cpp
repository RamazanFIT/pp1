#include <bits/stdc++.h>

using namespace std;

int rec(int a, int b, int k){
    if(k == 0) return b;

    return rec(b, a + b, k - 1);
}
// 0 1  5
// 1 1  4
// 1 2  3
// 2 3  2
// 3 5  1
// 5 8  0
// 0 1  5
// 0 1  5

int main(){
    
    // 0 1   1 2 3 5 8 13 21 
    int n;
    cin >> n;
    // cout << rec(0, 1, n);

    for(int i = 1; i <= n; i++){
        cout << rec(0, 1, i) << " ";
    }

    return 0;
}