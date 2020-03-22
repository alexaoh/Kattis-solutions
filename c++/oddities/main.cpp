#include <iostream>

using namespace std;
int main(){

	int n{0};
	cin >> n;
	for (int i = 0; i<n; ++i){
		int numba{0};
		cin >> numba;
		if (numba%2 == 0){
			cout << numba << " is even" << endl;
		}else{
			cout << numba << " is odd" << endl;
		}
	}
}

