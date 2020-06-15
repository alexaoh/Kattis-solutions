#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
    int R, C;
    std::cin >> R >> C;
    double cheeseArea = M_PI*pow(R-C, 2);
    double cheeseRatio = cheeseArea/(M_PI*pow(R,2));
    std::cout << std::setprecision(7) << std::fixed << cheeseRatio*100;
}
