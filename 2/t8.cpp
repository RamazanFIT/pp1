#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    int cnt = 0;

    // 13343 % 10 = 3
    // 13343 / 10000 = 1
    
    for(int i = 0; i < n; i++){
        int number;
        cin >> number;
        if(number % 10 == 7){
            // cnt++;
            cnt = cnt + 1;
        }
    }
    cout << cnt;

    return 0;
}