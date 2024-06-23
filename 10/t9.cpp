#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // toupper 
    // 'a' -> 'A' 
    // tolower

    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++){
        // if(s[i] >= 'a' and s[i] <= 'z'){
        //     s[i] = toupper(s[i]);
        // }
        s[i] = toupper(s[i]);

    }

    cout << s;

    return 0;
}