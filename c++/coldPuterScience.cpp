#include <iostream>

int main(){
    int n, amount = 0;
    std::cin >> n;
    for (int i = 0; i < n; ++i){
        int t;
        std::cin >> t;
        t < 0 ? amount++ : false;
    }
    std::cout << amount;
}
