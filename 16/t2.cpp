#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // 5
    // 1 2 3 4 5
    // Output:
    // 2 4 5 3 1

    int n;
    cin >> n;

    vector<int> massive(n);

    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    vector<int> even, odd;
    for(int i = 0; i < n; i++){
        if(massive[i] % 2 == 0){
            // cout << massive[i] << " ";
            even.push_back(massive[i]);
        }
    }

    for(int i = n - 1; i >= 0; i--){
        if(massive[i] % 2 != 0){
            // cout << massive[i] << " ";
            odd.push_back(massive[i]);
        }
    }

    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());

    reverse(even.begin(), even.end());
    reverse(odd.begin(), odd.end());
    // 2 4 8 10

    // 10 8 4 2

    for(int i = 0; i < even.size(); i++){
        cout << even[i] << " ";
    }
    for(int i = 0; i < odd.size(); i++){
        cout << odd[i] << " ";
    }

    return 0;
}