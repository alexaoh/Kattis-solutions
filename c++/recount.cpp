#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
#include <functional>

int main(){

    typedef std::function<bool(const std::pair<std::string, int>&, const std::pair<std::string, int>&)> Comparator;

    std::string name;
    std::map<std::string, int> nameCounts;

    while (true){
        std::getline(std::cin, name);
        if (name == "***") break;
        nameCounts[name]++;
    }

    Comparator comparison = 
        [](const std::pair<std::string, int>& a, const std::pair<std::string, int>& b){ return a.second >= b.second; };

    std::set<std::pair<std::string, int>, Comparator> setOfNames(
        nameCounts.begin(), nameCounts.end(), comparison
    );

    auto max = setOfNames.begin();
    auto nextMax = ++setOfNames.begin();

    if (max->second == nextMax->second){
        std::cout << "Runoff!";
    } else {
        std::cout << max->first;
    }

}
