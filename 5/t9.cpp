#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s = "[*]";

    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout << s;
        } 
        cout << endl;
    }

    return 0;
}