#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int massive[6] = {3, 1, 4, 6, 7, 1};

    // 1 1 3 4 6 7

    sort(massive + 0, massive + 6);
    reverse(massive + 0, massive + 6);

    for(int i = 0; i < 6; i++){
        cout << massive[i] << " ";
    }

    return 0;
}