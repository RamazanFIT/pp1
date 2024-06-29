#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int massive[n];
    int t;
    cin >> t;

    for(int i = 0; i < n; i++){
        // cin >> massive[i];

        int element;
        cin >> element;
        massive[i] = element;
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(massive[i] + massive[j] == t){
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";

    return 0;
}