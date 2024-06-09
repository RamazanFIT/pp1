#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    int massive[n];
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    
    int maximum = INT_MIN;

    for(int i = 0; i < n; i++){
        if(maximum < massive[i]){
            maximum = massive[i];
        }
    }
    // cout << maximum;
    for(int i = 0; i < n; i++){
        bool flag = maximum == massive[i];
        if(flag == true){
            cout << i + 1;
            return 0;
        }
    }

    // int maximum = INT_MIN;
    // int minimum = INT_MAX;

    // for(int i = 0; i < n; i++){
    //     int element;cin>>element;
    //     maximum = max(maximum, element);
    //     minimum = min(minimum, element);
    // }
    // cout << maximum;

    return 0;
}