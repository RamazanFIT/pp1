#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    n++;

    // while(true){
    //     set<int> check;

    //     int k = n;
    //     int cnt = 0; // 1234
    //     while(k > 0){
    //         check.insert(k % 10);
    //         k /= 10;
    //         cnt++;
    //     }
    //     if(check.size() == cnt){
    //         cout << n;
    //         return 0;
    //     }
    //     n++;
    // }

    for(int i = n; i < 10000; i++){
        set<int> check;

        int k = i;
        int cnt = 0; // 1234
        while(k > 0){
            check.insert(k % 10);
            k /= 10;
            cnt++;
        }
        if(check.size() == cnt){
            cout << i;
            return 0;
        }
    }

    return 0;
}