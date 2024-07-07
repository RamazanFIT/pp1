#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // 1 2 3 4 5 
    // 1 2
    // 2 3 
    // 3 4
    // 4 5 


    // 5
    // 4 3 1 4 5


    // 4 + 3 = 7 
    // 3 + 1 = 4
    // 1 + 4 = 5
    // 4 + 5 = 9

    // 4 

    set<int> st;

    int n;
    cin >> n;
    vector<int> massive(n);
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }

    for(int i = 1; i < n; i++){
        st.insert(massive[i] + massive[i - 1]);
    }

    cout << st.size();

    return 0;
}