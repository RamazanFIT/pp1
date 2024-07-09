#include <bits/stdc++.h>

using namespace std;

int main(){
    
    deque<int> dq;

    dq.push_back(1);
    dq.push_front(100);
    // begin . .. . . . . . .end 
    dq.pop_back();
    dq.pop_front(); // удаляет

    // dq.size() 

    while(dq.size() > 0){
        cout << dq.front() << " ";
        dq.pop_front();

        // cout << dq.back() << " ";
        // dq.pop_back();
    }


    return 0;
}