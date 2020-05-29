#include <iostream>

int main(){
    int kings = 1;
    int queen = 1;
    int rooks = 2;
    int bishops = 2;
    int knights = 2;
    int pawns = 8;

    int k, q, r, b, kn, p;
    std::cin >> k >> q >> r >> b >> kn >> p;
    std::cout << (kings-k) << " " << (queen-q) << " " << (rooks-r) << " " << (bishops-b) << " " << (knights-kn) << " " << (pawns-p); 
}
