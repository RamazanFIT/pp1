#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // AAA@BBB.CCC, where aaa -> english 

    string s;
    cin >> s;
    int position_of_point = -1;

    int position_of_sobaka = -1;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '.') position_of_point = i;
        else if(s[i] == '@') position_of_sobaka = i;
    }

    if(position_of_point == -1 or position_of_sobaka == -1){
        cout << "No";
        return 0;
    }

    if(position_of_point < position_of_sobaka){
        cout << "No";
        return 0;
    }

    for(int i = 0; i < position_of_sobaka; i++){
        if(s[i] < 'a' or s[i] > 'z'){
            cout << "No";
            return 0;
        }
    }
    for(int i = position_of_sobaka + 1; i < position_of_point; i++){
        if(s[i] < 'a' or s[i] > 'z'){
            cout << "No";
            return 0;
        }
    }

    for(int i = position_of_point + 1; i < s.size(); i++){
        if(s[i] < 'a' or s[i] > 'z'){
            cout << "No";
            return 0;
        }
    }

    cout << "YES";
    
    return 0;
}