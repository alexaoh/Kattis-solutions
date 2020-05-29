#include <iostream> 
#include <vector>
#include <iomanip>

int main(){
    int n;
    std::cin >> n;
    std::vector<std::vector<double>> vec(n);
    for (auto i = 0; i < n; ++i){
        double b, p;
        std::cin >> b >> p;
        double calc = (double)60*b/p;
        double min = calc - (double)calc/b;
        double max = calc + (double)calc/b;
        vec[i].push_back(min);
        vec[i].push_back(calc);
        vec[i].push_back(max);
    }  

    for (auto x : vec){
        for (auto v : x){
            std::cout << std::setprecision(6) << std::fixed << v << " ";
        }
        std::cout << "\n";
    }
}
