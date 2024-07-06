#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int massive[10];

    for(int i = 0; i < 10; i++){
        massive[i] = 0;
    }

    while (true)
    {
        int x;
        cin >> x;

        if(x == 0) break;

        massive[x]++;
    }

     
    for(int i = 1; i <= 9; i++){
        cout << massive[i] << " ";
    }

    return 0;
}