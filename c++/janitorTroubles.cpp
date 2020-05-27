#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

int main(){
    //Using Brahmagupta's formula
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    double s = static_cast<double>(a+b+c+d)/2;
    double area = sqrt((s-a)*(s-b)*(s-c)*(s-d));
    std::cout << std::setprecision(6) << std::fixed << area;

}
