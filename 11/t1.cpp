#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // 2 3 5 7 11 13 17 19 23 

    int n;
    cin >> n;
    
    int cnt = 0;

    int number = 2;

    for(int j = 0; j < INT_MAX; j++) {
        int x = 0;
        for(int i = 2; i < number; i++){
            if(number % i == 0){
                x++;
            }
        }
        if(x == 0){
            cnt++;
        }

        if(cnt == n){
            cout << number;
            return 0;
        }
        number++;
    }

    return 0;
}