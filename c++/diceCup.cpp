#include <iostream>
#include <map>
#include <algorithm>

int main(){
    std::map<int, int> sums;
    int N, M;
    std::cin >> N >> M;
    for (int i = 1; i < N+1; ++i){
        for (int j = 1; j < M+1; ++j){
            sums[i+j]++;
        }
    }

    auto m = std::max_element(sums.begin(), sums.end(), [](auto lhs, auto rhs) { return lhs.second < rhs.second; }); 
    for (auto pair : sums){
        if (pair.second >= m->second){  
            std::cout << pair.first << '\n';
        }
    }
}
