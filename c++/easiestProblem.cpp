#include <iostream>
#include <vector>

using namespace std;

int sumDigits(int number);
int main(){
	int input{0};
	vector<int> output;
	do{
		int p{10};
		int sumProd{0};
		int prod{0};
		cin >> input;
		if (input == 0) break;
		int sumN{sumDigits(input)};
		while(sumProd != sumN){
			++p;
			prod = input*p;
			sumProd = sumDigits(prod);			
		}
		output.push_back(p);

	} while(input != 0);

	for (auto x : output){
		cout << x << endl;
	}
}

int sumDigits(int number){
	int sum{0};
	int m{0};
	while(number>0){
		//Finds the digit sum. 
		m = number%10;
		sum += m;
		number = number / 10;
	}
	return sum;
}