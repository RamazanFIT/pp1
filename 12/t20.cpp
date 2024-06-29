#include <bits/stdc++.h>

using namespace std;

int solution(){
    string s;
    cin >> s;

    int pos = -1;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '-'){
            pos = i;
        }
    }

    for(int i = 0; i < pos; i++){
        if(not isdigit(s[i])){
            cout << "No";
            return 0;
        }
    }
    for(int i = pos + 1; i < s.size(); i++){
        if(not isdigit(s[i])){
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";

}
int main(){
    
    solution();
    return 0;
}