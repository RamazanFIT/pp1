#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;cin>>n;
    vector<int> massive1(n);
    for(int i = 0 ;i < n; i++) cin >> massive1[i];


    int m;cin>>m;
    vector<int> massive2(m);
    for(int i = 0 ;i < m; i++) cin >> massive2[i];


    set<int> check;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            check.insert(massive1[i] + massive1[j]);
        }
    }
    for(int i = 0; i < m ;i++){
        if(check.find(massive2[i]) != check.end()){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
    return 0;
}