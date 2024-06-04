#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int massive[n];

    for(int i = 0; i < n; i++){
        cin >> massive[i];

        // int el;
        // cin >> el;
        // massive[i] = el;
    }

    int odd = 0;
    int even = 0;

    for(int i = 0; i < n; i++){

        int element = massive[i];
        if(element % 2 == 0){
            // even++;
            even += 1;
        } else{
            // odd++;
            odd += 1;
            // odd = odd + 1;
        }

    }
    cout << even << " " << odd;


    return 0;
}