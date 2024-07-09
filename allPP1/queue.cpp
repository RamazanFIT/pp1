#include <bits/stdc++.h>

using namespace std;

int main(){
    
// HOSPITAL  roma dilnaz malika jojo koko lolo 

    queue<string> q;

    q.push("roma");
    q.push("dilnaz");
    q.push("malika");
    q.push("jojo");
    q.push("koko");
    q.push("lolo");

    // cout << q.front() << endl;
    // q.pop();
    // cout << q.front() << endl;
    // q.pop();

    while(q.size() > 0){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}