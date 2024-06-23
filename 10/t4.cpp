#include <bits/stdc++.h>

using namespace std;

// int rec(int x){

//     if(x > 10){
//         return 0;
//     }

//     cout << x << " ";
//     rec(x + 1);
// }

int fib(int a, int b, int stop){
    if(a + b > stop){
        return 0;
    }

    cout << a + b << " ";
    fib(b, a + b, stop);
}

int main(){
    
    // 1 10 

    // rec(1);

    // 0 1 1 2 3 5 8 13 .... 
        // 1 2 3 5 8 13 21 34 55 89 %        
    // 13 / 8 = 1.6
    // a b c 
    //   a b 
    // c = a + b 
    

    fib(0, 1, 100);



    return 0;
}