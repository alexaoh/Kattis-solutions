#include <iostream>
#include <map>
#include <algorithm>

int main(){
    std::map<char, int> ranks;
    std::string hand;
    for (int i = 0; i<5;++i){
        std::cin >> hand; 
        ++ranks[hand[0]];
    }
    
    auto m = std::max_element(ranks.begin(), ranks.end(), [](const std::pair<char, int>& c1, const std::pair<char, int>& c2){ return c1.second < c2.second; });
    std::cout << m->second;
}
