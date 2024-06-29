#include <bits/stdc++.h>

using namespace std;

int rec(int n){
    if(n == 1){
        return 1;
    }
    int larg = 1;

    int cnt = 0;

    for(int i = 1; i < n; i++){
        if(n % i == 0){
            cnt++;
            larg = i;
        }
    }
    // cout << cnt << " ";
    return rec(larg) + cnt;
}

int main(){
    // f(1) = 1


    int n;
    cin >> n;
    cout << rec(n);

    return 0;
}