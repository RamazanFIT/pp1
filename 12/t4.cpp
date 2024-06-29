#include <bits/stdc++.h>

using namespace std;

int rec(int a, int b, int nth, int cnt){
    if(cnt >= nth) return a + b;

    return rec(b, a + b, nth, cnt + 1);
}

int main(){
    
    // fib 

    // fact 
        //  a b
    // 0 1 1 2 3 5 8 13 
    //    a b c
    //    c = a + b 

    //    a = b 
    //    b = c = a + b 

    rec(0, 1);

    return 0;
}