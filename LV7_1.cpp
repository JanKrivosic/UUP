#include <iostream>

int main() {
    char naredba;

    std::cin >> naredba;

    switch (naredba) {
    case 'N':
    case 'n':
        std::cout << "NAPRIJED" << std::endl;
        break;

    case 'L':
    case 'l':
        std::cout << "LIJEVO" << std::endl;
        break;

    case 'D':
    case 'd':
        std::cout << "DESNO" << std::endl;
        break;

    case 'S':
    case 's':
        std::cout << "STANI" << std::endl;
        break;

    default:
        std::cout << "NEPOZNATA NAREDBA" << std::endl;
        break;
    }

    return 0;
}