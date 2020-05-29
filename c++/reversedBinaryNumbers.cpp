#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>
#include <cmath>
#include <bitset>

int main(){
    int bin;
    std::cin >> bin;
    std::stringstream ss;
    while (bin){
        ss << bin % 2;
        bin /= 2;
    }
    std::string reversedBinaryNum = ss.str();

    bin = std::stoi(reversedBinaryNum, 0, 2); //Takes string in binary (base 2) to integer (base 10):
    std::cout << bin;
}
