#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, m;
    cin >> n >> m;

    for(int i = n; i < m; i++){
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

    cout << "Understandable, have a great day";

    return 0;
}