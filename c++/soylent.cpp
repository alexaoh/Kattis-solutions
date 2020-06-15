#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

int main(){
    int n; 
    std::cin >> n;
    std::vector<int> out;
    for (int i = 0; i < n; ++i){
        int x;
        std::cin >> x;
        out.push_back(ceil((double)x/400));
    }
    std::for_each(out.begin(), out.end(), [](auto& s){ std::cout << s << '\n'; });

}