#include <bits/stdc++.h>

using namespace std;


int rec(int x){

    if(x > 10){
        return 0;
    }

    cout << x << " ";
    rec(x + 1);
}

int main(){
    
    // 1 2 3 ... 10

    rec(1);

    return 0;
}