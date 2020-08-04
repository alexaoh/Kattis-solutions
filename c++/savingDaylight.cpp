#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main(){
    string line;
    vector<string> out;
    while (getline(cin, line)) {
        if (line == "") break; 

        istringstream ist{line};
        string month;
        string day;
        string year;
        string firstTime;
        string secondTime;

        ist >> month >> day >> year >> firstTime >> secondTime;

        string firstHour = firstTime.substr(0, firstTime.find(':'));
        string firstMin = firstTime.substr(firstTime.find(':')+1, firstTime.size());

        string secondHour = secondTime.substr(0, secondTime.find(':'));
        string secondMin = secondTime.substr(secondTime.find(':')+1, secondTime.size());

        int firstH = stoi(firstHour)*60;
        int secondH = stoi(secondHour)*60;

        int diffMin = (firstH + stoi(firstMin)) - (secondH + stoi(secondMin));

        int diffH = diffMin / 60;
        diffMin = diffMin % 60;

        stringstream ss;
        ss << month << " " << day << " " << year << " " << -diffH << " hours " << -diffMin << " minutes\n";
        out.push_back(ss.str());
    }

    for (auto x : out){
        cout << x;
    }
}
