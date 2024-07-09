#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    set<string> st;

    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

        bool flaga = false;
        bool flagA = false;
        bool flag1 = false;

        for(int j = 0; j < s.size(); j++){
            if(s[j] >= 'a' and s[j] <= 'z'){
                flaga = true;
            }
            if(s[j] >= 'A' and s[j] <= 'Z'){
                flagA = true;
            }
            if(s[j] >= '0' and s[j] <= '9'){
                flag1 = true;
            }
        }
        if(flaga and flagA and flag1){
            st.insert(s);
        }

    }
    cout << st.size() << endl;
    for(auto it : st){
        cout << it << " ";
    }
    return 0;
}