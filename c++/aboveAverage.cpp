#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int N{0};
	cin >> N;
	for (int i = 0; i<N; ++i){
		string line;
		getline(cin, line);
		int N1 = stoi(line[0]);
		stringstream ss{line};
		vector<int> studentScores;
		while (ss >> line) 
	}
}
