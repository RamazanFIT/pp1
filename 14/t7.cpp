#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s;
    
    vector<string> v;
    int maximum = INT_MIN;
    while(cin >> s){
        v.push_back(s);
        int sz = s.size();
        maximum = max(maximum, sz);
    }

    for(int i = 0; i < v.size(); i++){
        if(maximum == v[i].size()){
            cout << v[i];
            return 0;
        }
    }

    return 0;
}