#include <bits/stdc++.h>

using namespace std;

void rec(int n, int i){
    if(i > n) return;

    while(n % i == 0){
        cout << i << " ";
        n /= i;
    }
    rec(n, i + 1);
}

int main(){
    
    int n;
    cin >> n;
    rec(n, 2);
    

    return 0;
}