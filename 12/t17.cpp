#include <bits/stdc++.h>

using namespace std;

int decimal(int n){
    // 12 -> 15 


    //     12 % 7 = 5 
    // 12 / 7 = 1

    //     1 % 7 = 1
    // 1 / 7 = 0
    string s = "";

    while(n > 0){
        s += char((n % 7) + '0');
        n /= 7;
    }
    reverse(s.begin(), s.end());
    cout << s;
}

int main(){
    
    int n;
    cin >> n;
    decimal(n);

    return 0;
}