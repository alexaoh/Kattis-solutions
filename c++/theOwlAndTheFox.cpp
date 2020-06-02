#include <iostream>
#include <string>
#include <sstream>
#include <numeric>
#include <cmath>
#include <vector>
#include <stdlib.h>

int main(){
    int N;
    std::cin >> N;
    std::vector<std::string> results;
    for (int i = 0; i < N; ++i){
        std::string numString;
        std::cin >> numString;
        int sum = std::accumulate(numString.begin(), numString.end(), 0, [](const char& lhs, const char& rhs){ return lhs + (rhs - '0'); });
        int newSum = sum - 2;
        int j = 0;
        std::string newNumString;
        std::ostringstream ss;
        
        while (newSum != (sum - 1)){
            ss << (std::stoi(numString)/pow(10,j) - 1)*pow(10,j) + std::stoi(numString)%(int)pow(10,j);
            newNumString = ss.str();
            newSum = std::accumulate(newNumString.begin(), newNumString.end(), 0, [](const char& lhs, const char& rhs){ return lhs + (rhs - '0'); });
            ++j;
            ss.str(""); //Clear contents of stringstream!
        }
        results.push_back(newNumString);
        
    }

    for (auto x : results){
        std::cout << x << '\n';
    }
}
