#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // vector<int> massive;

    // cout << massive.size();
    // massive.push_back(54);
    // massive.push_back(3);
    // massive.push_back(323);
    // massive.push_back(34);
    // massive.push_back(312);
    // cout << massive.size();

    // cout << massive[1];
    // cout << massive.size() << endl;

    // massive.pop_back();

    // cout << massive.size() << endl;
    // sort(massive.begin(), massive.end());
    // reverse(massive.begin(), massive.end());
    // for(int i = 0; i < massive.size(); i++){
    //     cout << massive[i] << " ";
    // }


    // 5
    // 1 2 3 4 5

    int n;
    cin >> n;

    // vector<int> massive;

    // for(int i = 0; i < n; i++){
    //     int el;
    //     cin >> el;
    //     massive.push_back(el);
    // }

    vector<int> massive(n);

    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }


    for(int i = 0; i < massive.size(); i++){
        cout << massive[i] << " ";
    }
    return 0;
}