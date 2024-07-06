#include <bits/stdc++.h>

using namespace std;

int main(){
    
    vector<int> v;

    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int el;
        cin >> el;
        v.push_back(el);
    }
    int m;
    cin >> m;
    for(int i = 0; i < m; i++){
                int el;
        cin >> el;
        v.push_back(el);
    }
    sort(v.begin(), v.end());
    // for(auto it : v) cout << it << " ";
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}