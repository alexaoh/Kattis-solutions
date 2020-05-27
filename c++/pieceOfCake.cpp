#include <iostream>
#include <algorithm>

int main(){
    int n, h, v;
    std::cin >> n >> h >> v;
    int height = 4;

    int vol1 = (n-v)*(n-h)*height;
    int vol2 = (n-h)*v*height;
    int vol3 = h*v*height;
    int vol4 = h*(n-v)*height;

    int max = std::max({vol1, vol2, vol3, vol4});

    std::cout << max;

}
