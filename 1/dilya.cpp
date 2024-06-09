#include <iostream>

using namespace std;
int main(){
    int n;
    cin >> n;
    if(n % 2 == 1){
        cout << "Super";
        // return 0;
    }
    if(n % 2 == 0 and 2 <= n and n <= 5){
        cout << "Not Super";
    }
     if(n % 2 == 0 and 6 <= n and n <= 20){
        cout << " Super";
    }
    else if(n % 2 == 0 and 20 < n ){
        cout << "Not Super";
    }

    // x 

    // // [14 25]

    // if(14 <= x and x <= 25){

    // }

    return 0;
}