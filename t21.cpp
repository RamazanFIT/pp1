#include <bits/stdc++.h>

using namespace std;

// int void double string vector<int> map<int, int> ........

int say_hello(string name){
    return "Hello to " + name;
}


int main(){
    
    string s;
    cin >> s;
    cout << say_hello(s);
    cout << say_hello("Dilnaz");
    cout << say_hello("KUka");

    return 0;
}