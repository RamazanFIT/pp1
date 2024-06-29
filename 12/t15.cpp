#include <bits/stdc++.h>

using namespace std;

int rec(string s, int i){
    if(i >= s.size()) return 0;
    return (rec(s, i + 1) + s[i] - '0') % (s[s.size() - 1] - '0');
}


int main(){
    
    string s;
    cin >> s;

    if(rec(s, 0) == 0){
        cout << "YES";
    } else{
        cout << "NO";
    }

    return 0;
}