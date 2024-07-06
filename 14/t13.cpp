#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;cin>>n;
    
    vector<pair<pair<int, int>, int>> massive;
                    // y    m   d

    for(int i = 0; i < n; i++){
        int d, m, y;
        cin >> d;
        char a;
        cin >> a;

        cin >> m;

        cin >> a;

        cin >> y;

        massive.push_back({{y, m}, d});

    }

    sort(massive.begin(), massive.end());

    for(int i = 0; i < n; i++){
        int d = massive[i].second;
        int m = massive[i].first.second;
        int y = massive[i].first.first;
        if(d < 10){
            cout << 0 << d <<"-";
        } else{
            cout << d << "-";
        }
        if(m < 10){
            cout << 0 << m << "-";
        } else{
            cout << m<< "-";
        }
        cout << y << endl;
    }

//     3
// 01-12-2000
// 01-11-2000
// 31-10-2000
// 31-10-2000
// 01-11-2000
// 01-12-2000

    return 0;
}