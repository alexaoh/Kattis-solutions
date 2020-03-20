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
	intToChar['z'] = 9999;

	for (int i = 3; i <= 9; ++i){
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

	int N{0};
	cin >> N;
	for (int i = 0; i < N; ++i){
		cin.ignore();
		string input;
		getline(cin, input);
		string outputString{""};
		for (int e = 0; e < input.size(); ++e){
			char letter = input[e];
			if (letter == ' '){
				outputString += '0';
			}
			outputString += intToChar[letter];
			cout << intToChar[letter];
		}
		cout << "Case#" << i+1 << ": " << outputString << endl; 
	}

}

int concatenate(int i, int j) {
    int result = 0;
    result = i*10 + j;
    return result;
}
