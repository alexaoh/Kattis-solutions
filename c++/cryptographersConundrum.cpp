#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

template<class ForwardIt, class T>
constexpr // since C++20
void iota(ForwardIt first, ForwardIt last, T value)
{
    while(first != last) {
        *first++ = value;
        ++value;
    }
}

int main(){
    int days{0};
    std::string word;
    std::cin >> word;

    std::vector<int> seq1(300);
    std::vector<int> seq2(300);

    iota(seq1.begin(), seq1.end(), 0);
    iota(seq2.begin(), seq2.end(), 0);

    std::transform(seq1.begin(), seq1.end(), seq1.begin(), [](int i){ return 1+3*i; });
    std::transform(seq2. begin(), seq2.end(), seq2.begin(), [](int i){ return 2+3*i; });



    for (int i = 0; i < word.size(); ++i){
        auto foundE = std::find(seq1.begin(), seq1.end(), i);
        auto foundR = std::find(seq2.begin(), seq2.end(), i);
        if (i % 3 == 0 && word[i] != 'P') days++;
        else if (foundE != seq1.end() && foundR == seq2.end() && word[i] != 'E') days++;
        else if (foundE == seq1.end() && foundR != seq2.end() && word[i] != 'R') days++;
    }

    std::cout << days;
}

// P = 0, 3, 6, 9. ...
// E = 1, 4, 7, 10, ...
// R = 2, 5, 8, 11, ...