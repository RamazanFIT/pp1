#include <bits/stdc++.h>

using namespace std;

int rec(string s, int i){

    if(i >= s.size()){
        cout << -1;
        return 0;
    }

    if(isupper(s[i])){
        cout << s[i];
        return 0;
    } else{
        rec(s, i + 1);
    }
}


int main(){
    
    // if(isupper('A')){
    //     cout <<" YES";
    // } else{
    //     cout << "NO";
    // }
    // islower 

    string s;
    cin >> s;

    rec(s, 0);


    return 0;
}