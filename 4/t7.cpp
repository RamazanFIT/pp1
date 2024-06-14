#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    int target;
    cin >> target;

    int massive[n];

    for(int i = 0 ; i < n; i++){
        cin >> massive[i];
    }

    int answer;

    for(int i = 0; i < n; i++){
        if(target == massive[i]){
            answer = i;
        } else if(target > massive[i]){
            answer = i + 1;
        }
    }
    cout << answer;

    return 0;
}