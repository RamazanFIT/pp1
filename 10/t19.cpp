#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    cin >> s;
    
    for(int i = 'a'; i <= 'z'; i++){
        for(int index = 0; index <= s.size(); index++){
            // string tmp = "";
            // for(int j = 0; j < index; j++){
            //     tmp += s[j];
            // }
            // tmp += i;
            // for(int j = index; j < s.size(); j++){
            //     tmp += s[j];
            // }
            
            string tmp = s;
            tmp.insert(tmp.begin() + index, i);
            string a = tmp;
            // cout << tmp << endl;
            reverse(a.begin(), a.end());
            if(a == tmp){
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";

    return 0;
}