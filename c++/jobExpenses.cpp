#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    int sum{0};
    for (int i = 0; i < N; ++i){
        int k;
        cin >> k;
        if (k < 0){
            sum -= k;
        }
    }
    cout << sum;
}
