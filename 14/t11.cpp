#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if(n <= 1) return false;
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}


int main(){
    
    // 2 3 5 7 11
    // 1 2 3 4 5 6

    // 3 - superprime 
    // 5 - superprime 
    // 11 - superprime 

    int n;
    cin >> n;

    int cnt = 1;

    int which = 0;

    int i = 2;

    while(true){
        if(isPrime(i) and isPrime(cnt)){
            which++;
        }

        if(which == n){
            cout << i;
            return 0;
        }
        cnt++;
        i++;
        while(!isPrime(i)){
            i++;
        }
    }


    return 0;
}