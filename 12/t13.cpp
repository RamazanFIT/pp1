#include <bits/stdc++.h>

using namespace std;

void solution(){
    int n;
    cin >> n;
    int massive[n];
    for(int i = 0; i < n; i++){
        cin >> massive[i];
    }
    int q;
    cin >> q;

    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;

        int cnt = 1;
        int maximum = massive[l];
        for(int j = l + 1; j <= r; j++){
            if(massive[j] >= maximum){
                cnt++;
                maximum = massive[j];
            }
        }
        cout << cnt << endl;

    }



}

int main(){
    
    solution();

    return 0;
}