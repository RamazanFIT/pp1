#include <bits/stdc++.h>

using namespace std;

int fact(int x){
    if(x == 1) return 1;
    // return x * fact(x - 1);
    return 7 * 6 * 5 * 4 * 3 * 2 * 1
        fact(7 - 1)
            return 6 * fact(5)
                        fact(5)
                            return 5 * fact(4)
                                         fact(4)
                                         return   4 * fact(3)
                                                fact(3)
                                                   return   3 * fact(2)
                                                        fact(2)
                                                            return  2 * fact(1)
                                                                fact(1)
                                                                    return 1

}

int main(){
    
    // 1 2 3 4 5 = 5! 
    // int x = 1;


    // for(int i = 1; i <= 5; i++){
    //     x *= i;
    // }
    // cout << x;
    cout << fact(7);

    return 0;
}