#include <iostream>
#include <cmath>
#include <iomanip>

int main(){
    //Circles are squares angled 45 degrees with the axes in Taxicab coordinates. 
    int radius;
    std::cin >> radius;
    std::cout << std::setprecision(4) << std::fixed << M_PI*pow(radius,2);
    std::cout << '\n';
    std::cout << std::setprecision(4) << std::fixed << radius*radius*2;
}
