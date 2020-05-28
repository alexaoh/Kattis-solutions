#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>

int main(){
    std::map<char, int> letters{
        {'A', 0},
        {'B', 1}, 
        {'C', 2}
    };

    int A, B, C;
    std::cin >> A >> B >> C;
    std::vector<int> vec{A, B, C};
    std::sort(vec.begin(), vec.end());
    
    std::string order;
    char oA, oB, oC;
    std::cin >> oA >> oB >> oC;
    std::cout << vec[letters[oA]] << ' ';
    std::cout << vec[letters[oB]] << ' ';
    std::cout << vec[letters[oC]];
}
