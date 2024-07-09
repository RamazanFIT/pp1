#include <bits/stdc++.h>

using namespace std;

// recursion = function сама себя вызывает

void kuka(int n){
    if(n >= 10){
        return;
    }
    cout << n << " ";
    kuka(n + 1);
}

int main(){
    
    kuka(1);

    return 0;
}