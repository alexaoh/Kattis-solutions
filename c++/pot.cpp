#include <iostream>
#include <cmath>
#include <string>

int main(){
    int amount;
    std::cin >> amount;
    int sum{0};
    for (int i = 0; i < amount; ++i){
        std::string str; 
        std::cin >> str;    
        sum += pow(std::stoi(str.substr(0, str.size()-1)), std::stoi(str.substr(str.size()-1, 1)));
    }
    std::cout << sum;
}
