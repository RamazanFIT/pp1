#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    set<int> st;

    for(int i = 0; i < n; i++){
        int el;
        cin >> el;

        st.insert(el);
    }

    if(st.size() == n){
        cout << "YES";
    } else{
        cout << "NO";
    }

    return 0;
}