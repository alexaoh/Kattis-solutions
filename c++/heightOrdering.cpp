#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <map>

using namespace std;

int main(){
    int P;
    cin >> P;
    map<int, vector<int>> dict;

    for (int i = 0; i < P; ++i){
        int K;
        cin >> K;
        string line;
        getline(cin, line);
        istringstream iss{line};
        vector<int> nums;
        int num;
        while (iss >> num){
            nums.push_back(num);
        }

        dict[i+1] = nums;
    }

    for (auto& pair : dict){
        bool isSorted = false;
        int count = 0;
        while (!isSorted){
            isSorted = true;
            for (int i = 0; i < pair.second.size()-1; ++i){
                if (pair.second[i] > pair.second[i+1]){
                    int temp = pair.second[i];
                    pair.second[i] = pair.second[i+1];
                    pair.second[i+1] = temp;
                    count++;
                    isSorted = false;
                }
            }
        }
        pair.second[0] = count; 
    }

    for (auto pair : dict){
        cout << pair.first << " " << pair.second[0] << '\n';
    }
}
