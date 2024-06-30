#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // queue - очередь

//   D  4 5 6 2 1 

    // queue<string> q;

// D
    
    // q.push("malika");
    // q.push("kuanysh");
    // q.push("roma");
    
    // while(q.size() > 0){
    //     cout << q.front() << endl;
    //     q.pop();
    // }



    // cout << q.front() << endl;
    // q.pop();
    // cout << q.front() << endl;
    // q.pop();
    // cout << q.front() << endl;
    // q.pop();

    // cout << "Size: " << q.size();

    // deque<string> dq;

    // dq.push_back("malika");
    // dq.push_back("kuka");
    // dq.push_back("roma");
    // dq.push_front("arsen");

    // arsen malika kuka roma 

    // cout << dq.front() << " " << dq.back();

    // while(dq.size() > 0){
    //     cout <<  dq.front() << " ";
    //     dq.pop_front(); // begin
    //     dq.pop_back(); // end
    // }


    stack<int> st;

    st.push(1);
    st.push(23);
    st.push(11);
    st.push(5);

    // 5
    // 11
    // 23
    // 1

    // cout << st.top() << endl;
    // st.pop();
    // cout << st.top() << endl;
    // st.pop();
    while(st.size() > 0){
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}