#include <iostream>
#include <vector>
#include <string>
#include <stdexcept>
#include <map>

int main(){
    std::vector<std::string> results;
    std::map<int, std::string> radiusToColor; //All cups are different both in size and color, which makes this fine.
    int N;
    std::cin >> N;
    for (int i = 0; i < N; ++i){
        std::string x, y;
        std::cin >> x >> y;
        try{
            int d = std::stoi(x);
            radiusToColor[d/2] = y;

        } catch(std::invalid_argument& re){
            radiusToColor[std::stoi(y)] = x;
        }
    }

    for (auto pair : radiusToColor){
        std::cout << pair.second << '\n';
    }

}
