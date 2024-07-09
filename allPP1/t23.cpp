#include <bits/stdc++.h>

using namespace std;

void rec(int n){
    if(n <= 0) return;
    cout << "Hello" << " ";
    rec(n - 1);
}

int main(){
    
    rec(20);

    return 0;
}