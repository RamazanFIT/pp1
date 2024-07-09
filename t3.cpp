#include <bits/stdc++.h>

using namespace std;

int main(){
    
    map<string, int> mapa;

    int n;
    cin >> n;
    int maximum = INT_MIN;
    for(int i = 0; i < n; i++){
        string name;
        cin >> name;

        int money;
        cin >> money;

        // mapa[name]+=money;
        mapa[name] = mapa[name] + money;
        maximum = max(maximum, mapa[name]);
    }


    for(auto it : mapa){
        if(it.second == maximum){
            cout << it.first << " is lucky!" << endl;
        } else{
            
            cout << it.first << " has to receive " << abs(maximum - it.second) << endl;

        }


    }


    return 0;
}