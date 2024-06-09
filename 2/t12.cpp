#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // 101010111
    // 101111011
    // 101010011 -> number 

    int a, b;cin>>a>>b;
    cout << (a ^ b);
    // bitwise xor = ^
    // 1 0 = 1
    // 1 1 = 0
    // 0 0 = 0
    // 0 1 = 1
    return 0;
}