#include <bits/stdc++.h>

using namespace std;

int main(){
    
    map<pair<int, int>, int> mapa;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        // pair<int, int> p;
        // p.first = x;
        // p.second = y;
        // cout << mapa[p] << endl;
        cout << mapa[make_pair(x, y)] << endl;

        mapa[make_pair(x, y)]++;
        mapa[make_pair(y, x)]++;

    }


    return 0;
}