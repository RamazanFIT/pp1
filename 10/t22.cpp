#include <bits/stdc++.h>

using namespace std;

int main(){
    
    string s; char a; int check;cin >> s >> a >> check;int cnt = 0;for(int i = 0; i < s.size(); i++) if(s[i] == a) cnt++; if(cnt == check) cout << "YES"; else cout << "NO";

    return 0;
}