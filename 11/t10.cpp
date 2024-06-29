#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    string massive1[n];

    for(int i = 0; i < n; i++){
        cin >> massive1[i];
    }

    int m;
    cin >> m;
    string massive2[m];
    for(int i = 0; i < m; i++){
        cin >> massive2[i];
    }

    cout << "Missed students:" << endl;

    for(int i = 0; i < n; i++){
        int cnt = 0;
        for(int j = 0; j < m; j++){
            if(massive1[i] == massive2[j]) cnt++;
        }
        if(cnt == 0) {
            cout << "- " << massive1[i] << endl;
        }
    }

    cout << "Not in the group:" << endl;

    for(int j = 0; j < m; j++){
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(massive2[j] == massive1[i]) cnt++;
        }
        if(cnt == 0){
            cout << "- " << massive2[j] << endl;
        }
    }

    

    return 0;
}