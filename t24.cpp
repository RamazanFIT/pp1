#include <bits/stdc++.h>

using namespace std;

int rec(int x){
    if(x == 0) return 0;
    return x + rec(x - 1);
    //         6 + 15 = 21
    // rec(5)
    //     5 + 10 = 15

    // rec(4) 
    //     4 + 6 = 10
    
    // rec(3)
    //     3 + 3 = 6
    
    // rec(2)
    //     2 + 1 = 3

    // rec(1)
    //     1 + rec(0)
    // rec(0) 0

}

int main(){
    
    // 1 2 3 4 5 6

    // 1 + 2 + 3 + 4 + 5 + 6
    cout << rec(6);
    return 0;
}