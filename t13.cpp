#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int cnt = 0;

    for(int i = 0; i < n; i++){
        int element;
        cin >> element;

        if(element % 10 == 7){
            cnt++;
        } 
    }
    cout << cnt;

    // 123 % 10 = 3 

    // 452352  % 10 = 2
    return 0;
}