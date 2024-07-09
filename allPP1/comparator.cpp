#include <bits/stdc++.h>

using namespace std;

bool comp(int a, int b){
    // if(a >= b){
    //     return true;
    // } else{
    //     return false;
    // }

    if(a <= b){
        return true;

    } else{
        return false;
    }
}

int main(){

    int n;
    cin >> n;

    vector<int> massive(n);

    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }

    sort(massive.begin(), massive.end(), comp);

    for(int i = 0; i < n; i++){
        cout << massive[i] << " ";
    }

    return 0;
}