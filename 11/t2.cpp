#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // roma = 5
    // suleiman = 10
    // mapa 
    // mapa["roma"] -> 5 
    // mapa["sul"] -> 10

    // malika = 15 

    // // string m[3];
    
    // m["roma"] -> 5

    // vector map set 

    // int massive[5];

    // vector<int> massive(5);

    // sort(massive.begin(), massive.end());

    // massive[0] = 5;

    // vector<int> massive;
    // [1, 2, 3, 4, 5]
    // massive.push_back(5);


    map<string, int> mapa;
    
    // roma -> ramazan 

    mapa["suleiman"] = 10;
    mapa["roma"] = 5;

    for(auto it : mapa){
        cout << it.first << " " << it.second << endl;
    }


    return 0;
}