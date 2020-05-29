#include <iostream> 
#include <set>

int main(){
    std::set<int> s;
    for (int i = 0; i < 10; ++i){
        int num;
        std::cin >> num;
        int n = num % 42;
        s.insert(n);
    }

    std::cout << s.size();
}
