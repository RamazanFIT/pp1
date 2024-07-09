#include <bits/stdc++.h>

using namespace std;

int main(){
//     5

//     1
//    111
//   11111
//  1111111
// 111111111

    int n;
    cin >> n;

    int cnt = 1;

    for(int i = 0; i < n; i++){
        int probel = n - 1 - i;
        for(int j = 0; j < probel; j++){
            cout << " ";
        }
        for(int j = 0; j < cnt; j++){
            cout << 1;
        }
        cnt += 2;
        cout << endl;
    }

    return 0;
}