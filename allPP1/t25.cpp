#include <bits/stdc++.h>

using namespace std;

int rec(int n){
    if(n == 0) return 1;

    return n * rec(n - 1);
}

int main(){
    
    // 5! = 5 4 3 2 1
    int n;
    cin >> n;
    cout << rec(n);

    return 0;
}