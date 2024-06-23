#include <bits/stdc++.h>

using namespace std;

int main(){
    
    
    string s1;
    string s2;
    cin >> s1 >> s2;

    if(s1.find(s2) == -1){
        cout << "NO";
    } else{
        cout << "YES";
    }

    return 0;
}