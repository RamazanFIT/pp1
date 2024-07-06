#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        // 'a' - 1
        // 'b' - 2
        // 'b' - 'a' + 1
        int ii = s[i] - 'a';

        char b = char('a' + 26 - ii - 1);

        cout << b;
    }

    return 0;
}