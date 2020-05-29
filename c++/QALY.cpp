#include <iostream>
#include <iomanip>

int main(){
    int num;
    std::cin >> num;
    double qaly{0};
    for (int i = 0; i < num; ++i){
        double q, y; 
        std::cin >> q >> y; 
        qaly += q*y;
    }

    std::cout << std::setprecision(5) << std::fixed << qaly;
}
