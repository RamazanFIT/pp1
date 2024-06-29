#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cin >> s;
    

    // '1' = 49 
    // '1' = 1
    // '0' = 48 
    // '1' - '0' = 49 - 48 = 1

    int sum = 0;
    int last = s[s.size() - 1] - '0';

    for(int i = 0; i < s.size(); i++){
        sum += s[i] - '0';
    }

    if(sum % last){
        cout << "YES";
    } else{
        cout << "NO";
    }

    return 0;
}