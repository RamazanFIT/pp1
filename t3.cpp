#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    map<int, int> mapa;

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;

        int sum = a + b;

        cout << mapa[sum] << endl;
        mapa[sum]++;
    }

    return 0;
}