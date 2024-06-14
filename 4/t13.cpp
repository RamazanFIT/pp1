#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int x;
    cin >> x;
    int sqrtOfX = sqrt(x);
    // 10 
    // 3 
    // 3 * 3 != 10

    if(sqrtOfX * sqrtOfX == x){
        cout << "Yes";
    } else{
        cout << "No";
    }

    return 0;
}