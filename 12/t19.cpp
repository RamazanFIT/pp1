#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    

    for(int i = 0; i < a; i++){
        if(not isdigit(s[i])){
            cout << "No";
            return 0;
        }
    }
    for(int i = a + 1; i < s.size(); i++){
        if(not isdigit(s[i])){
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
    

    return 0;
}