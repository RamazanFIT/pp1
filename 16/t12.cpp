#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;

    }

    int m;
    cin >> m;
    vector<string> answer;
    vector<pair<string, string>> inp;
    for(int i = 0; i < m ;i++){
        string a, b;
        cin >> a >> b;
        inp.push_back(make_pair(a, b));
    }

    string love;
    cin >> love;

    for(int i =0 ; i< m; i++){
        string a = inp[i].first;
        string b = inp[i].second;
        if(a == love){
            answer.push_back(b);
        } else if(b == love){
            answer.push_back(a);
        }
    }

    sort(answer.begin(), answer.end());

    for(int i = 0; i <  answer.size(); i++){
        cout << answer[i] << " ";
    }

    return 0;
}