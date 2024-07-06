#include <bits/stdc++.h>

using namespace std;

bool comp(pair<int, string> a, pair<int, string> b){
    if(a.first > b.first) return true;
    else if(a.first < b.first) return false;

    for(int i = 0; i < a.second.size(); i++){
        if(a.second[i] > b.second[i]) return false;
        else if(a.second[i] > b.second[i]) return true;
    }
    return true;
}

int main(){

    string s;
    map<string, int> mapa;
    while(cin >> s){
        mapa[s]++;
    }
    vector<pair<int, string>> v;

    for(map<string, int> :: iterator it = mapa.begin(); it != mapa.end(); it++){
        v.push_back(make_pair(it->second, it->first));
    }

    sort(v.begin(), v.end(), comp);

    for(int i = 0; i < v.size(); i++){
        cout << v[i].second << " : " << v[i].first << endl;
    }

    
    

    return 0;
}