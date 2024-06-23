#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cin >> s;
    int cnt = 0;
    string vowels = "aeiou";
    for(int i = 0; i < s.size(); i++){
        // if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u'){
        //     cnt++;
        // }
        if(vowels.find(s[i]) != -1){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}