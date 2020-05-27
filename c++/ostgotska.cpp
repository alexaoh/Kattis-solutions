#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>
#include <fstream>

int main(){
    int wordCounter = 0;
    std::string word;
    int ostgotskaWords = 0;
    getline(std::cin, word);
    std::istringstream ss{word};
    while(ss >> word){
        auto foundOstgotska = word.find("ae");
        if (foundOstgotska != std::string::npos){
            ostgotskaWords++;
        }
        wordCounter++;
    }
    double ratio = static_cast<double>(ostgotskaWords)/wordCounter;
    if (ratio >= 0.4) std::cout << "dae ae ju traeligt va";
    else std::cout << "haer talar vi rikssvenska";
}
