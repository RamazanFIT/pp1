#include <bits/stdc++.h>

using namespace std;

int main(){
    
        // roma dilnaz ivan beka assadbek 
        // ramazan dilnaz roma vasya assadbek  ivan

        // beka ramazan vasya 

        int n;
        cin >> n;

        vector<string> massive1(n);
        map<string, int> mapa1;
        for(int i = 0; i < n; i++){
            cin >> massive1[i];
            string name = massive1[i];
            mapa1[name] = mapa1[name] + 1;
        }

        int m;
        cin >> m;

        vector<string> massive2(m);
        map<string, int> mapa2;
        for(int i = 0; i < m; i++){
            cin >> massive2[i];
            string name = massive2[i];
            mapa2[name] = mapa2[name] + 1;
        }
        
        vector<string> answer;

        for(int i = 0; i < n; i++){
            string name = massive1[i];
            if(mapa2[name] == 0) {
                answer.push_back(name);
            }
        }

        for(int i = 0; i < n; i++){
            string name = massive2[i];
            if(mapa1[name] == 0) {
                answer.push_back(name);
            }
        }
        sort(answer.begin(), answer.end());


        for(int i = 0; i < answer.size(); i++){
            cout << answer[i] << " ";
        }

    return 0;
}