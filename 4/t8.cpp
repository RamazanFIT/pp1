#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;
    int massive[n];
    int abstract[200000];
    for(int i = 0; i < 200000; i++) abstract[i] = 0;

    // 5 5  4 5

    for(int i= 0; i < n; i++){
        cin >> massive[i];
        abstract[massive[i]]++;
        if(abstract[massive[i]] <= 1){
            cout << massive[i] << " ";
        }
    }

    return 0;
}