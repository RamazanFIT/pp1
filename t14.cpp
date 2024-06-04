#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // 112

    // 112 % 10 = 2
    // // 112 / 10 = 11 

    // 11 % 10 = 1
    // // 11 / 10 = 1 

    // 1 % 10 = 1
    // // 1 / 10 = 0

    // 112

    // int n;
    // cin >> n;

    // while(n > 0){
    //     cout << n % 10 << " ";
    //     n /= 10;
    // }


    int n;
    cin >> n;
    int how_many_zeros = 0;
    for(int i = 0; i < n; i++){
        int element;
        cin >> element;
        while(element > 0){
            // cout << element % 10 << " ";
            if(element % 10 == 0){
                how_many_zeros++;
            }
            element /= 10;
        }
    }
    cout << how_many_zeros;


    return 0;
}