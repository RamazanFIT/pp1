#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    // 99 
    // sqrt(99) = 9.9 = 9
    // sqrt(16) = 4
    // 1 2 3 4 5 6 7 8 9
    // 1 2 3 4 5 6 7 8 9
    // 1 4 9 16 25 .... 81

    // for(int i = 1; i * i <= n; i++){
    //     cout << i * i << " ";
    // }

    int sqr = sqrt(n);

    // for(int i = 1; i <= sqr; i++){
    //     cout << i * i << " ";
    // }

    int i = 1;

    while(i <= sqr){
        cout << i * i << " ";
    }

    return 0;
}