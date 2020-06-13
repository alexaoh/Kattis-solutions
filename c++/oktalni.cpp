#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <numeric>

struct Result{
    void operator()(std::string& bin){
        int i = 0, decimalNumber = 0;
        int binary = std::stoi(bin);
        while(binary != 0){
            decimalNumber += (binary%10) * std::pow(2,i);
            ++i;
            binary/=10;
        }
        result += std::to_string(decimalNumber);
    }
    std::string result{""}; 
};

int main(){
    std::string n;
    std::cin >> n;
    std::stringstream ss;
    std::vector<std::string> bits;
    int size = n.size();
    while (size%3 != 0){
        ss << '0';
        size++;
    }    
    ss << n;
    n = ss.str();

    for (int i = 0; i<n.size(); i+=3){
        bits.push_back(n.substr(i,3));
    }

    Result r = std::for_each(bits.begin(), bits.end(), Result());
    std::cout << r.result;

}
