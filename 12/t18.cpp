#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n;
    cin >> n;

    int seconds[n];

    for(int i = 0; i < n; i++){
        int hour, minute, second;
        cin >> hour >> minute >> second;

        seconds[i] = hour * 3600 + minute * 60 + second;
        
    }
    // sort(seconds, seconds + n);

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(seconds[i] > seconds[j]){
                swap(seconds[i], seconds[j]);
                // int tmp = seconds[i];
                // seconds[i] = seconds[j];
                // seconds[j] = tmp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        int hour = seconds[i] / 3600;
        int minute = (seconds[i] - hour * 3600) / 60;

        int second = seconds[i] % 60;
        cout  << hour << " " << minute << " " << second << endl; 
    }

    return 0;
}