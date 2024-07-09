#include <bits/stdc++.h>

using namespace std;

int main(){
    
    map<string, double> cnt;
    map<string, double> sum;

    int n;
    cin >> n;

    for(int  i= 0 ; i< n; i++){
        string name;
        cin >> name;
        int x;
        cin >> x;
        sum[name] += x;
        cnt[name] += 1;
    }

    // map<string, double> :: iterator it;

    // for(it = sum.begin(); it != sum.end(); it++){
    //     string name = (*it).first;
    //     double summa = it->second;

    //     int count = cnt[name];

    //     cout << fixed << setprecision(3) << name << " " << summa/count << endl;
    // }

    for(auto it : sum){
        string name = it.first;
        double summa = it.second;

        int count = cnt[name];

        cout << fixed << setprecision(3) << name << " " << summa/count << endl;
    }

    return 0;
}