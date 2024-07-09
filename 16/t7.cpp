#include <bits/stdc++.h>

using namespace std;

int main(){
    
    vector<vector<string>> massive;
    // vector<pair<string, pair<string, string>>> massive;

    int n;
    cin >> n;
    string type;
    cin >> type;

    // inc 

    // dec

    // 16 45 00
    // 08 15 20
    // 12 30 45
    // 03 10 55
    // 20 05 30

    for(int i = 0; i < n; i++){
        string hour, minute, seconds;
        cin >> hour >> minute >> seconds;
        vector<string> tmp;
        tmp.push_back(hour);
        tmp.push_back(minute);
        tmp.push_back(seconds);
        massive.push_back(tmp);
    }

    if(type == "inc"){
        sort(massive.begin(), massive.end());
    } else{
        sort(massive.begin(), massive.end());
        reverse(massive.begin(), massive.end());
    }
    
    for(int i = 0; i < n; i++){
        cout << massive[i][0] << " " << massive[i][1] << " " << massive[i][2] << endl;
    }

    return 0;
}