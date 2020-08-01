#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <map>
#include <algorithm>

using namespace std;

void fillVector(vector<int>& vec, int weeks);

int main(){
    int participants;
    int budget;
    int hotelAmount;
    int weeks;

    cin >> participants >> budget >> hotelAmount >> weeks;

    cin.ignore();

    map<int, vector<int>> dict; 

    vector<int> vec(weeks+1);
    for (int i = 0; i < 2*hotelAmount; ++i){
        if ((i%2) == 0){
            string line;
            getline(cin, line);
            int price = stoi(line);
            vec[0] = price;
        } else {

            fillVector(vec, weeks);
            dict[i/2] = vec;
        }
        
        
    }

    bool possible = false; 
    int min = budget;
    for (auto pair : dict){
        auto max = *max_element(pair.second.begin()+1, pair.second.end());
        if (max < participants) continue;
        if (participants*pair.second[0] <= min){
            min = participants*pair.second[0];
            possible = true;
        }
    }

    if (possible) cout << min;
    else cout << "stay home";

}

void fillVector(vector<int>& vec, int weeks){
    string line; 
    getline(cin, line);
    istringstream ost{line};
    for (int i = 1; i < weeks+1; ++i){
        int num;
        ost >> num;
        vec[i] = num;
    }
}
