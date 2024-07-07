#include <bits/stdc++.h>

using namespace std;

int main(){
    

    // massive.push_back(1);
    // massive.push_back(2);

    // for(int i = 0; i < massive.size(); i++){
    //     cout << massive[i] << " ";
    // }
    vector<int> massive;

    int n, m;
    cin >> n >> m;

    int massive_2d[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> massive_2d[i][j];
        }
    }

    for(int i = 0; i < n; i++){

        int cnt = 0;
        for(int j = 0; j < m; j++){
            if(massive_2d[i][j] > 0) cnt++;
        }
        massive.push_back(cnt);
    }

    // for(int i = 0; i < massive.size(); i++){
    //     cout << massive[i] << " ";
    // }
    if(massive[0] == massive[1]){
        cout << "Numbers are equal";
        return 0;
    } else{
        int maximum = INT_MIN;
        for(int i = 0; i < massive.size(); i++){
            maximum = max(maximum, massive[i]);

        }
        for(int i = 0; i < massive.size(); i++){
            if(massive[i] == maximum){
                cout << i + 1;
                return 0;
            }
        }
    }

    return 0;
}