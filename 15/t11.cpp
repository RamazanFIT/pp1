#include <bits/stdc++.h>

using namespace std;

bool check_for_prime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0) return false;
    }
    return true;
}


int main(){
    
    int n;
    cin >> n;

    vector<int> massive;

    for(int i = 2; i <= 1000; i++){
        if(check_for_prime(i) == true){
            massive.push_back(i);
        }
    }

    for(int i = 0; i < massive.size(); i++){
        for(int j = 0; j < massive.size(); j++){
            if(massive[i] + massive[j] == n){
                cout << massive[i] << " " << massive[j];
                return 0;
            }
        }
    }

    return 0;
}