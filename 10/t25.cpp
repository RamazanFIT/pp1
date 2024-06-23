#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        // s[i] = char(int(s[i]) + 1);
        if(s[i] != 'z')
        s[i]++;
        else s[i] = 'a';
    }

    cout << s;

    return 0;
}