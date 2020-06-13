#include <iostream>
#include <string>
#include <sstream>
#include <vector>

int main(){
    int n;
    std::vector<int> miles;
    while(std::cin >> n && n != -1){
        int sum{0};
        std::vector<int> times;
        for (int i = 0; i < n; ++i){
            int s, t;
            std::cin >> s >> t;
            times.push_back(t);
            if (times.size() == 1){
                sum += s * times[0];
            } else {
                sum += s * (times[i] - times[i-1]);
            }
        }
        miles.push_back(sum);
    }

    for (auto mile : miles){
        std::cout << mile << " miles\n";
    }
}
