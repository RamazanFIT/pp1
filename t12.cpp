#include <bits/stdc++.h>

using namespace std;

int main(){

    // 11111
    //  1111
    //   111
    //    11
    //     1

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout << " ";
        }
        for(int j = 0; j < n - i; j++){
            cout << 1;
        }
        cout << endl;
    }

    

    return 0;
}