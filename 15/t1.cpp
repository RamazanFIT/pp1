#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    int l, r;
    cin >> l >> r;

    vector<int> massive(n);

    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }


    reverse(massive.begin()+l-1, massive.begin() + r);

    for(int i = 0; i < massive.size(); i++){
        cout << massive[i] << " ";
    }

    return 0;
}