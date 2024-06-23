#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;cin>>s;

    int odd = 0;
    int even = 0;
    for(int i = 0; i < s.size(); i++){
        if(i % 2 != 0){
            odd += s[i] - '0';
        } else{
            even += s[i] - '0';
        }
    }

    if(odd == even){
        cout << "YES";
    } else{
        cout << "NO";
    }

    
    // '2' 50 

    // '0' 48 
    // '2' - '0' = 50 - 48 = 2 
    // '9' - '0' = 9


    return 0;
}