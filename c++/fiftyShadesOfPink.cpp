#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>

int main(){
    int counter;
    std::cin >> counter;
    int amount = 0;
    for(int i = 0; i < counter; ++i){
        std::string str;
        std::cin >> str;
        std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c){ return std::tolower(c); });
        auto foundPink = str.find("pink");
        auto foundRose = str.find("rose");
        if (foundPink != std::string::npos || foundRose != std::string::npos){
            amount++;
        }
    }
    if (amount){
        std::cout << amount;
    } else {
        std::cout << "I must watch Star Wars with my daughter";
    }
}
