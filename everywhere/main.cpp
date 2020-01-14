#include <iostream>
#include <set>

using namespace std;
int main()
{
	int test_cases;
	cin >> test_cases;
	while (test_cases -- > 0){
		set<string> cityNames;
		int visits;
		cin >> visits; 
		while (visits-- > 0){
    		string s;
    		cin >> s;
    		cityNames.insert(s);
		}
		cout << cityNames.size() << endl;
	}
}
