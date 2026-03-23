//
// Created by Pawel on 17.03.2026.
//

#include "main.h"
#include <iostream>

using namespace std;

int main() {
    Pracownik p1("Jan", "Kowalski");
    Pracownik p2("Anna", "Nowak");

    cout << "Pracownik 1: " << p1.getImie() << " " << p1.getNazwisko() << endl;
    cout << "Pracownik 2: " << p2.getImie() << " " << p2.getNazwisko() << endl;

    Programista prog1("C++");
    Programista prog2("Java");
    Programista prog3("Python");

    cout << "\nProgramista 1 uzywa jezyka: " << prog1.getJezyk() << endl;
    cout << "Programista 2 uzywa jezyka: " << prog2.getJezyk() << endl;

    prog1.zmienJezyk("C++ / Rust");
    cout << "Programista 1 zmienil jezyk na: " << prog1.getJezyk() << endl;

    Zespol zespol("Backend Team");
    zespol.dodajCzlonka(prog1);
    zespol.dodajCzlonka(prog2);
    zespol.dodajCzlonka(prog3);

    cout << "\nStan zespolu:" << endl;
    zespol.wyswietlCzlonkow();

    zespol.usunCzlonka(prog2);
    cout << "\nPo usunieciu prog2:" << endl;
    zespol.wyswietlCzlonkow();

    zespol.zmienNazwe("Full-Stack Team");
    cout << "\nLiczba czlonkow po zmianie nazwy: " << zespol.getIlosc() << endl;
    zespol.wyswietlCzlonkow();

    return 0;
}

