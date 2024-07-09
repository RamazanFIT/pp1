#include <bits/stdc++.h>

using namespace std;

bool comp(vector<int> a, vector<int> b){
    int sum_a = 0;
    int sum_b = 0;

    for(int i = 0; i < a.size(); i++){
        sum_a += a[i];
    }
    for(int i = 0; i < b.size(); i++){
        sum_b += b[i];
    }
    if(sum_a <= sum_b){
        return true;
    } else{
        return false;
    }
}

int main(){
    
    // 3 4

    // 53 42 12 4  v1
    // 132 3232 242 242  v2
    // 3 1 3 5  v3
    // v = {v1, v2, v3 }
    int n, m;
    cin >> n >> m;

    // vector<vector<int>> massive(n, vector<int>(m));

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cin >> massive[i][j];
    //     }
    // }

    vector<vector<int>> massive;

    for(int i = 0; i < n; i++){
        vector<int> tmp;

        for(int j = 0; j < m; j++){
            int el;
            cin >> el;
            tmp.push_back(el);
        }
        massive.push_back(tmp);
    }

    sort(massive.begin(), massive.end(), comp);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << massive[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}