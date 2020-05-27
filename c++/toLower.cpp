#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <vector>

int main(){
    int P, T;
    int problemsSolved{0};
    std::vector<bool> bools;
    std::cin >> P >> T;
    for (int j = 0; j < P; ++j){
        for (int i = 0; i < T; ++i){
            std::string str;
            std::cin >> str;
            bools.push_back(std::any_of(str.begin()+1, str.end(), [](char c){ return std::isupper(c); }));
        }
        if (std::all_of(bools.begin(), bools.end(), [](bool is){ return !is; })) problemsSolved++;
        bools.clear();
    }
    std::cout << problemsSolved;
}
