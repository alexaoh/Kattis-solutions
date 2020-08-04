#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    int n;
    int digits;

    cin >> n >> digits;

    cout << setprecision(0) << fixed << round(n*pow(10, -digits))/pow(10, -digits);
}
