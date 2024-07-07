#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // 6
    // 1 2 3 3 4 2

    // NO  
    // NO 
    // NO 
    // YES 
    // NO  
    // YES 
    
    map<int, int> mapa;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int el;
        cin >> el;

        if(mapa[el] != 0){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
        mapa[el]++;
    }

    return 0;
}