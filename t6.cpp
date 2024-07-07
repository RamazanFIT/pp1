#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    vector<vector<int>> massive;

    for(int i = 0; i < n; i++){
        
        vector<int> tmp;
        int sum = 0;
        tmp.push_back(sum);
        for(int j = 0; j < n; j++){
            int element;
            cin >> element;
            tmp.push_back(element);
            sum = sum + element;
        }
        tmp[0] = sum;
        massive.push_back(tmp);
    }
    // 3
    // 4 5 6
    // 1 2 3 
    // 7 8 9


    sort(massive.begin(), massive.end());

    for(int i = 0 ;i < n; i++){
        // for(int j = 1; j < massive[i].size(); j++){
        //     cout << massive[i][j] << " ";
        // }
        for(int j = 1; j <= n; j++){
            cout << massive[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}