#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector<string> names;
    for (int i = 0; i < N; ++i){
        string name;
        cin >> name;
        names.push_back(name);
    }

    auto ans = is_sorted(names.begin(), names.end());

    if (ans) cout << "INCREASING";
    else{
        reverse(names.begin(), names.end());
        auto ans = is_sorted(names.begin(), names.end());
        if (ans) cout << "DECREASING";
        else cout << "NEITHER";
    } 
}   
