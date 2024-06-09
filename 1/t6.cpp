#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int x;
    cin >> x;

    // if(x == 0){
    //     cout << "None";

    //     return 0; // -> завершает программу полностью 
    // }

    // if(x % 2 == 0){
    //     cout << "Even";
    // } else{
    //     cout << "Odd";
    // }

    if(x == 0){
        cout << "None";
    } else if(x % 2 == 0){
        cout << "Even";
    } else{
        cout << "Odd";
    }
    // cout << 0 % 2;

    // if(x % 2 == 0 or and x != 3)

    

    return 0;
}