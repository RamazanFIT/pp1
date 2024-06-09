#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n, k;cin >> n >> k;


    int ost = n % k;

    if(n <= k){
        cout << 2;
        return 0;
    }

    if(ost <= k / 2){
        int some = max(n - k - ost, 0);
        int answer = (some / k) * 2 + 3;
        cout << answer;
    } else{
        cout << (n / k + (n % k > 0)) * 2;
    }
    

    return 0;
}