#include <iostream>

int main(){
    int n, p, q;
    std::cin >> n >> p >> q;
    if (n+p == q) std::cout << n << "+" << p << "=" << q;
    else if (n*p == q) std::cout << n << "*" << p << "=" << q;
    else if (n/p == q) std::cout << n << "/" << p << "=" << q;
    else if (n-p == q) std::cout << n << "-" << p << "=" << q;
    else if (n == p * q) std::cout << n << "=" << p << "*" << q;
    else if (n == p / q) std::cout << n << "=" << p << "/" << q;
    else if (n == p - q) std::cout << n << "=" << p << "-" << q;
    else if (n == p + q) std::cout << n << "=" << p << "+" << q;
}
