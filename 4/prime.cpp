#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // 1 n 

    int n;
    cin >> n;

    // 12

    // 2 3 4 5 6 7 8 9 10 11

    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0){
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";

    return 0;
}