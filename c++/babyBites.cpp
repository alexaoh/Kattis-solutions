#include <iostream>
#include <vector>
#include <algorithm>


int main(){
    int n; 
    std::cin >> n;
    std::vector<int> nums;
    for (int i = 0; i < n; ++i){
        std::string in;
        try{
            std::cin >> in;
            int j = std::stoi(in); //Throws invalid_argument if conversion fails.
            nums.push_back(j);
        } catch(std::invalid_argument& ia){
            if (!nums.size()) nums.push_back(1);
            else nums.push_back(nums[nums.size()-1]+1);
        }
    }

    bool consecutive = true;
    int k = 1;
    for (int i = 0; i < n; ++i){
        if (k++ != nums[i]){
            consecutive = false;
            break;
        }
    }

    if(consecutive){
        std::cout << "makes sense";
    } else {                        
        std::cout << "something is fishy";
    }
}
