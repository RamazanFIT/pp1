#include <bits/stdc++.h>

using namespace std;

int main(){
    
    map<int, int> mapa;

    for(int i = 1; i <= 9; i++){
        mapa[i] = 0;
    }

    map<int, int> :: iterator it;

    while (true)
    {
        int x;
        cin >> x;

        if(x == 0) break;

        mapa[x]++;
    }
    

    for(it = mapa.begin(); it != mapa.end(); it++){
        int key = it->first;
        int value = it->second;

        // cout << key << " " << value << endl;
        cout << value << " ";
    }
    

    return 0;
}