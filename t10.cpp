#include <bits/stdc++.h>

using namespace std;

int main(){
    
    vector<vector<string>> massive;
    // vector<pair<string, pair<string, string>>> massive;



    while(true){
        string day, month, year;
        // cin >> day >> month >> year;
        cin >> day;
        if(day == "0") break;

        cin >> month >> year;
        vector<string> tmp;
        tmp.push_back(year);
        tmp.push_back(month);
        tmp.push_back(day);
        massive.push_back(tmp);
    }


    sort(massive.begin(), massive.end());

    
    for(int i = 0; i < massive.size(); i++){
        cout << massive[i][2] << " " << massive[i][1] << " " << massive[i][0] << endl;
    }

    return 0;
}