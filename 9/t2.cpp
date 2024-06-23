#include <bits/stdc++.h>

using namespace std;


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    
    int n;
    cin >> n;
    vector<int> massive(n);

    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }

    int answer = 0;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            answer = max(answer, gcd(massive[i], massive[j]));
        }
    }

    cout << answer;

    return 0;
}