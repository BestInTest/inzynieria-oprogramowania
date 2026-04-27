#include "Main.h"
#include "TBernouli.h"
#include <iostream>

int main() {
    TBernouli b;

    // rzut monetą n=10 razy, p=0.5, szukamy P(X=3)
    std::cout << "Rzut moneta: n=10, p=0.5" << std::endl;
    b.bernouli(0.5, 10, 3); // P(X=3)
    b.bernouli(0.5, 10, 5); // P(X=5)

    std::cout << std::endl;

    // wadliwe produkty n=6, p=0.3, P(X=2)
    std::cout << "Wadliwe produkty: n=6, p=0.3" << std::endl;
    b.bernouli(0.3, 6, 2); // P(X=2)
    b.bernouli(0.3, 6, 0); // P(X=0)

    return 0;
}