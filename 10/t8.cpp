#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cin >> s;

    int cnt_of_capital = 0;
    int cnt_of_malenkaya = 0;

    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'A' and s[i] <= 'Z'){
            cnt_of_capital++;
        }
        if(s[i] >= 'a' and s[i] <= 'z'){
            cnt_of_malenkaya++;
        }
    }
    // cout << s.size() - cnt_of_capital << " " << cnt_of_capital;
    cout << cnt_of_malenkaya << " " << cnt_of_capital;

    return 0;
}