#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // ramazan 
    // dilnaz 
    // ramaamar

    string s;
    cin >> s;

    // string a = s;

    // reverse(a.begin(), a.end());

    // if(a == s){
    //     cout << a.size() - 1;
    // } else{
    //     cout << 0;
    // }
    int answer = 0;

    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < s.size(); j++){
            string tmp = "";
            for(int k = i; k <= j; k++){
                tmp += s[k];
            }
            string a = tmp;
            reverse(a.begin(), a.end());
            if(a != tmp){
                // answer = max(answer, tmp.size());
                if(tmp.size() > answer){
                    answer = tmp.size();
                }
            }
        }
    }
    cout << answer;

    return 0;
}