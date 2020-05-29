#include <iostream>
#include <map>
#include <algorithm>

int main(){
    std::map<int, int> contestantScores;    
    for (int i = 0; i < 5; ++i){
        int a, b, c, d;
        std::cin >> a >> b >> c >> d;
        contestantScores[i+1] = a+b+c+d;
    }

    auto m = std::max_element(contestantScores.begin(), contestantScores.end(), [](auto lhs, auto rhs) { return lhs.second < rhs.second; }); 

    std::cout << m->first << " " << m->second;
}
