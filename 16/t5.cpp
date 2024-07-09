#include <bits/stdc++.h>

using namespace std;

int main(){
    
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
        string operation;
        cin >> operation;
        if(operation == "end"){
            break;
        }

        if(operation == "sell"){
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

    return 0;
}