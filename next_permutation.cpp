#include <bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin >> n;
    vector<int> massive(n);

    for(int i = 0; i < massive.size(); i++){
        cin >> massive[i];
    }
    do
    {
        for(int i = 0; i < massive.size(); i++){
            cout << massive[i] << " ";
        }
        cout << endl;
    } while (next_permutation(massive.begin(), massive.end()));
    
    // 4 3 2
    // 0 1 2 
    // 0 2 1
    // 1 0 2
    // 1 2 0
    // 2 1 0
    // 3! = 6

    // 0 1 2 
    // 0 2 1 
    // 1 0 2 
    // 1 2 0 
    // 2 0 1 
    // 2 1 0 

// 4 3 2 
// 4 2 3 
// 3 4 2 
// 3 2 4 
// 2 4 3 
// 2 3 4 
    // do
    // {
    //     for(int i = 0; i < massive.size(); i++){
    //         cout << massive[i] << " ";
    //     }
    //     cout << endl;
    // } while (prev_permutation(massive.begin(), massive.end()));
    

    return 0;
}