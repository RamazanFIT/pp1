#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string a, b;
    cin>>a>>b;
    // if(a==b)cout<<"YES";
    // else cout << "NO";

    if(a.size() != b.size()){
        cout << "NO";
        return 0;
    }

    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}