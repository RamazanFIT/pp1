#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    // cin >> s;
    getline(cin, s);
    int n;
    cin >> n;

    for(int i = n; i < s.size(); i++){
        cout << s[i];
    }

    return 0;
}