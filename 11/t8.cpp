#include <bits/stdc++.h>

using namespace std;


int rec(int a, int b, int cnt, int m){
    if(cnt == m){
        return b % 10;
    } else{
        rec(b, a + b, cnt + 1, m);
    }
}

int main(){
    
    int k, m;
    cin >> k >> m;

    cout << rec(0, 1, 1, m);

    return 0;
}