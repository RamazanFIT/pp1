#include <bits/stdc++.h>

using namespace std;

int rec(int x){
    cout << x << " "; // 10 10
    rec(x);
}

int main(){
    
    rec(10);

    return 0;
}