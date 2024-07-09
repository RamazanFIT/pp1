#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // 5
    // 1 2 2 1 4

    // 4
    int n;
    cin >> n;
    map<int, int> mapa;

    for(int i = 0; i < n; i++){
        int el;
        cin >> el;

        // mapa[el]++; 
        mapa[el] = mapa[el] + 1;
    }
    for(auto it : mapa){
        if(it.second == 1){
            cout << it.first;
        }
    }

    // map<int, int> :: iterator it;

    // for(it = mapa.begin(); it != mapa.end(); it++){
    //     if(it->second == 1){
    //         cout << it->first;
    //     }
    // }


    return 0;
}