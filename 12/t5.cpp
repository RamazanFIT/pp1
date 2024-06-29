#include <bits/stdc++.h>

using namespace std;

int rec(int x){
    if(x == 1){
        return 1;
    }
    return x * rec(x - 1);
            // 5 * 4 * 3 * 2 * rec(1)
}


int main(){
    
    // 5! = 5 * 4 * .. 1

    // 5! = 5 * 4! 
    // 4! = 4 * 3!
    // 1! = 1

    cout << rec(5);


    return 0;
}