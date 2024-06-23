#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string a, b;
    cin >> a >> b;

    int absrt1[500];
    int absrt2[500];
    for(int i = 0; i < 500; i++){
        absrt1[i] = 0;
        absrt2[i] = 0;
    }

    for(int i = 0; i < a.size(); i++){
        absrt1[a[i]]++;
    }
    for(int i = 0; i < b.size(); i++){
        absrt2[b[i]]++;
    }
    for(int i = 0; i < 500; i++){
        if(absrt1[i] != absrt2[i]){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";

    return 0;
}