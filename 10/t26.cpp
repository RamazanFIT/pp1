#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string pattern, s;
    cin >> pattern >> s;
    if(s.size() % pattern.size() != 0){
        cout << "NO";
        return 0;
    }
    for(int i = 0; i <= s.size() - pattern.size(); i += pattern.size()){
        int cnt = 0;
        for(int j = i; j < i + pattern.size(); j++){
            if(pattern[cnt] != s[j]){
                cout << "NO";
                return 0;

            }
            cnt++;
        }
    }
    cout << "YES";
    return 0;
}