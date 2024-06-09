#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // 1234 
    //     1234 % 10 = 4 
    // 1234 / 10 = 123
    //     123 % 10 = 3
    // 123 / 10 = 12
    //     12 % 10 = 2 
    // 12 / 10 = 1
    //     1 % 10 = 1
    // 1 / 10 = 0 
    // stop 
    // int number;
    // cin >> number;
    // while(number > 0){
    //     cout << number % 10 << " ";
    //     number /= 10;
    // }

    int n;
    cin >> n;
    int cnt = 0;

    for(int i = 0; i < n; i++){
        int number;
        cin >> number;
        while(number > 0){
            // cout << number % 10 << " ";
            if(number % 10 == 0){
                cnt++;
            }
            number /= 10;
        }
    }

    cout << cnt;




    return 0;
}