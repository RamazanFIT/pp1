#include <bits/stdc++.h>

using namespace std;

void fib(int a, int b, int lim){
    if(a + b > lim) return;

    cout << a + b << ", ";

    fib(b, a + b, lim);
}


int phi(int n) {
    if (n == 0 || n == 1) return 1;
    return phi(n - 1) + phi(n - 2);
}


int main(){
    
    // int a = 0;
    // int b = 1;

    // int lim;
    // cin >> lim;
    // fib(a, b, lim);

    cout << phi(10);
    

    return 0;
}