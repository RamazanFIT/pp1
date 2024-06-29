#include <bits/stdc++.h>

using namespace std;

int rec(int x){

    if(x <= 0) return 0;

    int copy = x;
    int size = 0;

    while(copy > 0){
        copy /= 10;
        size++;
    }

    int z = pow(10, size - 1);
    int y = x / z;
    
    cout << y << " ";
    rec(x - y * z);
}

    // 1 * z 
int main(){
    
    int n;
    cin >> n;

    rec(n);
    // 123 
    // 123 / 100 = 1

    // 23 / 10 = 2 

    // 3 / 1 = 3 


    return 0;
}