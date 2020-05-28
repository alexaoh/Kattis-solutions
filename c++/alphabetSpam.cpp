#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>

int main(){
    std::string line;
    std::cin >> line;
    int whitespaces{0};
    int lowercase{0};
    int uppercase{0};
    int symbols{0};

    for (auto c : line){
        if (c == '_') whitespaces++;
        else if (islower(c)) lowercase++;
        else if (isupper(c)) uppercase++;
        else symbols++;
    }
    std::cout << std::setprecision(8) << std::fixed << whitespaces/(double)line.size() << '\n';
    std::cout << std::setprecision(8) << std::fixed << lowercase/(double)line.size() << '\n';
    std::cout << std::setprecision(8) << std::fixed << uppercase/(double)line.size() << '\n';
    std::cout << std::setprecision(8) << std::fixed << symbols/(double)line.size() << '\n';

}
