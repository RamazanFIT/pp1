#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    if(((n % 4 == 0) and ((((((((((((((((((((n % 100 != 0))))))))))))))))))))) or (n % 400 == 0)){
        cout << "YES";
    } else{
        cout << "NO";
    }

    return 0;
}