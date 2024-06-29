#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin>>n;
    int massive[n];

    for(int i = 0; i < n; i++) {
        cin >> massive[i];
    }

    int q;
    cin >> q;

    for(int j = 0; j < q; j++){
        int element;
        cin >> element;

        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(element == massive[i]) cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}