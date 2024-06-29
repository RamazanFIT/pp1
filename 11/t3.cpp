#include <bits/stdc++.h>

using namespace std;


int main(){
    

    // 10 | 2 
    // 5  | 5 
    // 1  

    // 10 = 2 * 5

    // 100 = 2 * 5 * 5 * 2

    int n;
    cin >> n;


    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            while(n % i == 0){
                cout << i << " ";
                n /= i;
            }
        }
    }

    return 0;
}