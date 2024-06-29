#include <bits/stdc++.h>

#include <set>
#include <vector>

using namespace std;

int main(){
    
    // set<int> s;

    // // [1, 2, 3, 4]

    // int n;
    // cin >> n;

    // for(int i = 0; i < n; i++){
    //     int el;
    //     cin >> el;

    //     s.insert(el);
    // }

    // for(auto it : s){
    //     cout << it << " ";
    // }

    // set<int> :: iterator it;

    // for(it = s.begin(); it != s.end(); it++){
    //     cout << *it << " ";
    // }

    // 1 2 3 4 5

    // find 

    // if(s.find(3) != s.end()){
    //     cout << "Found";
    // } else{
    //     cout << "Not found";
    // }

    // for(){
    //     if(mass[i] == el){

    //     }
    // }

    // set<int> :: iterator x = 0xdd34;


    set<int> s;

    // [1, 2, 3, 4]

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        int el;
        cin >> el;

        s.insert(el);
    }   

    int to_delete;
    cin >> to_delete;

    s.erase(to_delete);

    set<int>::iterator it;

    for(it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    // s.size()

    return 0;
}