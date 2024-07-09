#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // 1  push_back добавить в конец
    // 2   удалить с начала
    // 3 end 
    // // input 
    // 5
    // 1 2 3 4 5

    // 1 2 
    // 2 
    // 3

    // // output 
    // 2 3 4 5 2

    // return 0;
    // deque<int> dq;

    // dq.push_back();
    // dq.push_front();

    // dq.pop_back();
    // dq.pop_front();

    int n;
    cin >> n;
    deque<int> dq;
    for(int i = 0; i < n; i++){
        int element;
        cin >> element;
        dq.push_back(element);
    }

    while(true){
        int operation;
        cin >> operation;
        if(operation == 3){
            break;
        }

        if(operation == 2){
            dq.pop_back();
        } else{
            int element;
            cin >> element;
            dq.push_front(element);
        }
    }
    
    while(dq.size() > 0){
        cout << dq.front() << " ";
        dq.pop_front();
    }

}
