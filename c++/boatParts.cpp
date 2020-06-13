#include <iostream>
#include <map>
#include <string>

int main(){
    int P, N;
    std::cin >> P >> N;
    std::map<std::string, int> amounts;
    for (int i = 0; i < N; ++i){
        std::string part;
        std::cin >> part;
        ++amounts[part];
        if (amounts.size() == P){
            std::cout << i+1;
            break;
        }
    }
    if (amounts.size() < P) std::cout << "paradox avoided";
}
