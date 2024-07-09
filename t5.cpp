#include <bits/stdc++.h>

using namespace std;

int main(){


    // roma@gmail.com

    // 4 + pattern.size()

    // pattern.size()

    // 4 + pattern.size() - pattern.size() = 4 

    int n;
    cin >> n;
    string pattern = "@gmail.com";

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

        if(s.find(pattern) != -1){
            for(int j = 0; j < s.size() - pattern.size(); j++){
                cout << s[j];
            }
            cout << endl;
        }
    }

    return 0;
}