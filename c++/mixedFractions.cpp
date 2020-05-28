#include <iostream>
#include <string>
#include <sstream>
#include <queue>

int main(){
    std::queue<std::string> q;
    int amount{0};
    for (std::string str; getline(std::cin, str); ){
        std::istringstream iss{str};
        int numerator, denominator;
        iss >> numerator >> denominator;
        if (numerator == 0 && denominator == 0) break;
        q.push(str);
        amount++;
    }

    for (int i = 0; i < amount; ++i){
        std::string str = q.front();
        q.pop();
        std::istringstream iss{str};
        int numerator, denominator;
        iss >> numerator >> denominator;
        std::cout << numerator / denominator << " " << numerator % denominator << " / " << denominator << '\n';
    }
}
