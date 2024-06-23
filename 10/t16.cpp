#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // index -> element
    // value -> cnt of frequency 
    string s;cin>>s;
    int abstr[10];
    for(int i = 0; i < 10; i++){
        abstr[i] = 0;
    }
    int maximum = INT_MIN;
    for(int i = 0; i < s.size(); i++){
        abstr[s[i] - '0']++;
        maximum = max(maximum, abstr[s[i] - '0']);
    }

    for(int i = 0; i < 10; i++){
        // if(abstr[i] == 0) continue;

        if(abstr[i] != 0 and abstr[i] != maximum){
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";


    

    

    return 0;
}