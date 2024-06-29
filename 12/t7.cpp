#include <bits/stdc++.h>

using namespace std;

int rec(string s, int i){
    if(i >= s.size()) return 1; // stop 
    if(s[i] != s[s.size() - 1 - i]){
        return 0;
    }

    if(rec(s, i + 1) != 0){
        return 1;
    }
    return 0;
}

int main(){
    
    string s;
    cin >> s;

    // rec() -> 1 
    if(rec(s, 0) == 1){
        cout << "YES";
    } else{
        cout << "NO";
    }


    return 0;
}