#include <iostream>
#include <vector>
#include <string>

int main(){
    int n; 
    std::cin >> n;
    std::vector<std::string> lines;
    for (int i = 0; i < n; ++i){
        int r, e, c;
        std::cin >> r >> e >> c;
        if (e-c > r) lines.push_back("advertise");
        else if (e-c == r) lines.push_back("does not matter");
        else lines.push_back("do not advertise");
    }

    for (auto line : lines){
        std::cout << line << '\n';
    }

}
