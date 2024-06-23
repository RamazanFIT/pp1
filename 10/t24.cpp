#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // char a = 'a'; // 97 
    // char b = 'b'; // 98
    string s;
    cin >> s;
    int maximum = INT_MIN;
    for(int i = 0; i < s.size(); i++){
        maximum = max(maximum, int(s[i]));
    }
    cout << char(maximum);
    return 0;
}