#include <bits/stdc++.h>

using namespace std;

int rec_pow(int number, int power){
    if(power == 0) return 1;
    return number * rec_pow(number, power - 1);
            // 5 * rec_pow(5, 3)
            //         5 * rec_pow(5, 2)
            //                 5 * rec_pow(5, 1)
            //                         5 * rec(0)
                                            // 1
        // 5 5 5 5
}

int main(){
    
    // pow(x, p);

    cout << rec_pow(5, 4);

    return 0;
}