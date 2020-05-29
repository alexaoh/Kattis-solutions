#include <iostream>
#include <string>

int main(){
    std::string line;
    std::cin >> line;
    std::string word1 = line.substr(0,line.size()/3);
    std::string word2 = line.substr(line.size()/3, line.size()/3);
    std::string word3 = line.substr(2*line.size()/3, line.size()/3);
    
    if (word1 == word2) std::cout << word1;
    else if (word1 == word3) std::cout << word1;
    else if (word2 == word3) std::cout << word2;
}
