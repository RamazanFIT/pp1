#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string a, b;
    cin >> a >> b;

    // ramazan 

    while(a.find(b) != -1){
        int pos = a.find(b);
        cout << pos << " ";

        for(int i = 0; i <= pos; i++){
            a[i] = '#';
        }

    }
    // cout << endl;
    // cout << a << " " << b;

    // ababbababa
    // aba
    // 0 5 7 
    // ########ba aba

    return 0;
}