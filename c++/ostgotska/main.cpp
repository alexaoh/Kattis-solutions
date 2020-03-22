#include <iostream>
#include <sstream>
#include <algorithm>
#include <ctype.h>
#include <vector>
#include <string>

using namespace std;

//int count_words(string s);

int main(){
	string input;
	getline(cin, input);
	//input.erase(remove(input.begin(), input.end(), ' '), input.end());
	string temp;
	
	vector<string> words;
	int aeWordCount{0};
	stringstream ss{input};
	string word;
	while (ss >> word) words.push_back(word); //A vector of all the words.

	int wordCount = words.size();
	for (int i = 0; i<words.size(); ++i){
		for (int e = 0; e<words[i].size()-1; ++e){
			temp = words[i][e];
			temp += words[i][e+1];
			if (temp == "ae") aeWordCount += 1;
		}
	}
	
	string output1{"dae ae ju traeligt va"};
	string output2{"haer talar vi rikssvenska"};
	if (aeWordCount/static_cast<double>(wordCount) >= 0.4){
		cout << output1 << endl;
	} else{
		cout << output2 << endl;
	}
}
/*
int count_words(string s) {//Unneccessary when I do the same thing in main()
    int word_count( 0 );
    stringstream ss( s );
    string word;
    while( ss >> word ) ++word_count;
    return word_count;
}
*/