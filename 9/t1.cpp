#include <bits/stdc++.h>

using namespace std;

int main(){ 

    int n;cin >> n;
    string tmp = "@gmail.com";
    string answer = "";
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s.find(tmp) != -1){
            answer = s;
            for(int i = 0; i < answer.size() - tmp.size(); i++){
                cout << answer[i];
            }
            cout << endl;
        }
    }

    


    return 0;
}