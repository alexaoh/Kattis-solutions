#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
    map<char, int> dom = {
        {'A', 11}, 
        {'K', 4},
        {'Q', 3},
        {'J', 20},
        {'T', 10},
        {'9', 14}, 
        {'8', 0}, 
        {'7', 0}
    };

    map<char, int> notDom = {
        {'A', 11}, 
        {'K', 4},
        {'Q', 3},
        {'J', 2},
        {'T', 10},
        {'9', 0}, 
        {'8', 0}, 
        {'7', 0}
    };

    int N;
    char B;
    cin >> N >> B;
    int total{0};
    for (int i = 0; i < 4*N; ++i){
        string inp;
        cin >> inp;
        char card = inp[0];
        char suit = inp[1];
        if (suit == B){
            total += dom[card];
        } else total += notDom[card];
    }
    cout << total;

}
