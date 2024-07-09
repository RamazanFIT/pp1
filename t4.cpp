#include <bits/stdc++.h>

using namespace std;

int main(){
    
    vector<int> a;

    int x;

    while(cin >> x){
        a.push_back(x);
    }
    vector<int> b = a;

    reverse(b.begin(), b.end());

    if(a == b){
        cout << "YES";
    } else{
        cout << "NO";
    }
    return 0;
}