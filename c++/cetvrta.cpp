#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main(){
    std::map<int, std::vector<int>> values;
    for (int i = 0; i < 3; ++i){
        int x, y;
        std::cin >> x >> y;
        values[x].push_back(y);
    }
    int x, y;
    std::vector<int> y1;
    std::vector<int> y2;
    for (auto pair : values){
        if (pair.second.size() == 1){
            x = pair.first;
            y2 = pair.second;
        } else{
            y1 = pair.second;
        }
    }
    std::vector<int> difference = {};
    std::set_difference(y1.begin(), y1.end(), y2.begin(), y2.end(), std::back_inserter(difference));

    y = difference[0];
    std::cout << x << " " << y;

}
