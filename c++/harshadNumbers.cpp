#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>

int main(){
    std::string numString;
    std::cin >> numString;
    for (int i = std::stoi(numString); ;i++){
        std::ostringstream os;
        os << i;
        numString = os.str();
        int sumOfDigits = std::accumulate(numString.begin(), numString.end(), 0, [](const char& lhs, const char& rhs){ return lhs + (rhs - '0'); }); //Finds sum of integers;
        if (i % sumOfDigits == 0){
            std::cout << i;
            break;
        }
    }
    

}
