#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    int amount = 0;
    for (int i = 0; i < n; ++i){
        string s;
        cin >> s;
        auto found = s.find("CD");
        if (found == std::string::npos) amount++;
    }
    cout << amount;
}
