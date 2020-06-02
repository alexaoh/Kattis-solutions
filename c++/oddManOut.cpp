#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main(){
    int cases;
    std::cin >> cases;
    std::vector<int> results;
    for (int i = 0; i < cases; ++i){
        int guests;
        std::cin >> guests;
        std::map<int, int> counts;
        for (int j = 0; j < guests; ++j){
            int code;
            std::cin >> code;
            counts[code]++;
        }
        auto m = std::min_element(counts.begin(), counts.end(), [](const auto& lhs, const auto& rhs){ return lhs.second < rhs.second; });

        results.push_back(m->first);
    }
    int i = 1;
    for (auto x : results){
        std::cout << "Case #" << i << ": " << x << '\n';
        ++i;
    }
}