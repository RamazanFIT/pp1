#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // vector<pair<int, int>> massive;
    // 1 1
    // 1 200000000000
    // 10 5
    
    vector<  pair <double,  pair < string, string >  >  > massive;

    map<string, double> grades = {

        {"A+", 4.0}, 
        {"A", 3.75}, 
        {"B+", 3.50}, 
        {"B", 3.00}, 
        {"C+", 2.50}, 
        {"C", 2.0}, 
        {"D+", 1.50}, 
        {"D", 1.00}, 
        {"F", 0}, 
        
    };

    int n;
    cin >> n;

    for(int i = 0; i < n; i++){
        string name, surname;
        int cnt_of_subjects;
        cin >> name >> surname >> cnt_of_subjects;
        double cnt_of_credits = 0;
        double gc = 0;
        for(int j = 0; j < cnt_of_subjects; j++){
            string grade;
            cin >> grade;
            int credit;
            cin >> credit;

            gc += grades[grade] * credit;
            cnt_of_credits += credit;
        }

        double final_score = gc / cnt_of_credits;

        massive.push_back(make_pair(final_score, make_pair(name, surname)));
    }
    sort(massive.begin(), massive.end());

    for(int i = 0; i < n; i++){
        double score = massive[i].first;
        string name = massive[i].second.first;
        string surname = massive[i].second.second;
        cout << name << " " << surname << " " << setprecision(3) << fixed << score << endl;
    }

    return 0;
}

