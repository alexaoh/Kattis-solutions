#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main(){
    int x, y;
    std::vector<std::string> results;
    int line = 1;
    while(std::cin >> x >> y && (x != 0 && y != 0)){
        if (x + y == 13){ 
            results.push_back("Never speak again.");
        } else if (x > y){ 
            results.push_back("To the convention.");
        } else if (x < y){ 
            results.push_back("Left beehind.");
        } else if (x == y){ 
            results.push_back("Undecided.");
        }
        if (line == 15) break;
        line++;
    }

    for (auto x : results){
        std::cout << x << '\n';
    }
    
    
}
