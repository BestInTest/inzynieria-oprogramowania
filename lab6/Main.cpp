#include "Main.h"
#include "Baza_danych_logowania.h"
#include "Kontroler.h"
#include <iostream>

int main() {
    // Inicjalizacja bazy danych
    Baza_danych_logowania bd("192.168.0.1", "uzytkownicy_db");
    bd.dodajUzytkownika("jan.kowalski", "tajneHaslo123");
    bd.dodajUzytkownika("anna.nowak", "qwerty");

    // Kontroler z limitem 3 blednych prob
    Kontroler k(bd, 3);

    std::cout << "\n1: Poprawne dane" << std::endl;
    k.zlecLogowanie("jan.kowalski", "tajneHaslo123");

    std::cout << "\n2: Zle haslo" << std::endl;
    k.zlecLogowanie("jan.kowalski", "zleHaslo");

    std::cout << "\n3: Nieistniejace konto" << std::endl;
    k.zlecLogowanie("nieznany.user", "haslo");

    std::cout << "\n4: Przekroczenie limitu blednych prob" << std::endl;
    k.zlecLogowanie("jan.kowalski", "blad1");
    // 3 bledne proby wiec nastepne zostana zablokowane
    k.zlecLogowanie("jan.kowalski", "blad2");
    k.zlecLogowanie("jan.kowalski", "tajneHaslo123");

    bd.rozlacz();

    return 0;
}