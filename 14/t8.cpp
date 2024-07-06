#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int A, B;
    cin >> A >> B;
    string s;
    cin >> s;

    int sumUpperToLower = 0;
    int sumLowerToUpper = 0;

    for(int i = 0; i < n; i++){
        if(s[i] >= 'A' and s[i] <= 'Z'){
            sumUpperToLower += A;

        } else{
            sumLowerToUpper += B;
            
        }
    }
    cout << min(sumLowerToUpper, sumUpperToLower);

    return 0;
}