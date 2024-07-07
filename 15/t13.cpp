#include <bits/stdc++.h>

using namespace std;

int main(){
    
    map<string, string> mapa;

    vector<pair<string, string>> answers;

    
    int n;
    cin >> n;
    vector<pair<string, string>> massive(n);
    for(int i = 0; i < n; i++){
        cin >> massive[i].first >> massive[i].second;

        mapa[massive[i].first] = massive[i].second;
    }

    for(int i = 0; i < n; i++){
        string a = massive[i].first;
        string b = massive[i].second;
        if(mapa.find(b) != mapa.end()){
            string c = mapa[b];

            answers.push_back(make_pair(a, c));
            mapa.erase(a);
            mapa.erase(b);
        } 
    }

    for(auto it : mapa){
        answers.push_back(make_pair(it.first, it.second));
    }
    sort(answers.begin(), answers.end());

    for(int i = 0; i < answers.size(); i++){
        cout << answers[i].first << " " << answers[i].second << endl;
    }

    return 0;
}

// Aslan  HackMachine