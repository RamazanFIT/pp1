#include <bits/stdc++.h>

using namespace std;

int main(){
    
    set<int> a;

    int x;

    while(cin >> x){
        a.insert(x);
    }
    cout << a.size();
    return 0;
}