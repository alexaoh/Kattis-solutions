#include <iostream>
#include <vector>
#include <map>
using namespace std;

int concatenate(int i, int j);

int main(){
	vector<char> alphabet;
	map<char, int> intToChar;

	for (int i = 97; i <= 122; ++i){
		char letter = i;
		alphabet.push_back(letter);
	}

	int counter1{0};
	int counter2{1};
	int counter3{2};

	//Values that I could not fit in my pattern. 
	intToChar[alphabet[0]] = 2;
	intToChar[alphabet[1]] = 22;
	intToChar[alphabet[2]] = 222;
	intToChar['s'] = 7777;
	intToChar['t'] = 8;
	intToChar['u'] = 88;
	intToChar['v'] = 888;
	intToChar['w'] = 9;
	intToChar['x'] = 99;
	intToChar['y'] = 999;
	intToChar['z'] = 9999;
	intToChar[' '] = 0;


	//completes the map I use to map the characters to integers. 
	for (int i = 3; i <= 7; ++i){
		int one = concatenate(i,i);
		int two = concatenate(one, i);
		intToChar[alphabet[i+counter1]] = i; //A, D, G, ... --> indexes: 0, 3, 6, ...
		intToChar[alphabet[i+counter2]] = one; //B, E, H, ... --> indexes: 1, 4, 7, ...
		intToChar[alphabet[i+counter3]] = two; //C, F, I, ... --> indexes: 2, 5, 8, ...
		counter1 += 2;
		counter2 += 2; 
		counter3 += 2;
	}

	//Test code with given values from Kattis from this point onwards:
	//Testing with sample input 1:
	
	vector<string> outputs;
	int N{0};
	cin >> N;
	cin.ignore();
	for (int i = 0; i < N; ++i){
		string input;
		string output = "Case #";
		output += to_string(i+1);
		output += ": ";
		getline(cin, input);
		char letter = input[0];	
		if (isspace(static_cast<unsigned char>(letter))){
			output += "0";
		} else {
			output += to_string(intToChar.at(letter));
		}
		for (int e = 1; e < input.size(); ++e){
			char letter = input[e];	
			if (to_string(intToChar[input[e-1]])[0] == to_string(intToChar[letter])[0]){ //Trying to add space when necessary
				output += " ";
				output += to_string(intToChar.at(letter));
			} else {
				output += to_string(intToChar.at(letter));
			}
		}
		outputs.push_back(output);
	}
	
	for (auto x : outputs){
		cout << x << endl;
	}

}

int concatenate(int i, int j) {
    int result = 0;
    result = i*10 + j;
    return result;
}
