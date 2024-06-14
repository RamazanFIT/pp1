#include <bits/stdc++.h>

using namespace std;

int main(){
    
    
    int n;
    cin >> n;
    int massive[n];
    for(int i = 0; i < n; i++) cin >> massive[i];
    sort(massive, massive + n);
    reverse(massive, massive + n);
    for(int i = 0; i < n ;i++)cout << massive[i] << " ";
    return 0;
}