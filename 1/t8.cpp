#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int first, second;

    cin >> first >> second;


    if(first == second){
        cout << 0;
    } else if(first > second){
        cout << 1;
    } else{
        cout << "2";
    }


    

    return 0;
}