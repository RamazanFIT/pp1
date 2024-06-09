#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int even = 0;

    for(int i = 0; i < n; i++){
        int element;
        cin >> element;

        if(element % 2 == 0){
            even++;
        } 
    }
    cout << even << " " << n - even;

    return 0;
}