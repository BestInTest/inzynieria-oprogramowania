#include "main.h"
#include "Pies.h"
#include <string>
#include <iostream>

int main() {
    Ssak ssak(20, 50);
    Pies pies("imie", "rasa", "kolor", ssak);

    std::cout << "Informacje o psie:" << std::endl;
    std::cout << "Imie: " << pies.getImie() << std::endl;
    std::cout << "Rasa: " << pies.getRasa() << std::endl;
    std::cout << "Kolor: " << pies.getKolor() << std::endl;
    std::cout << "Wiek: " << pies.getWiek() << " lat" << std::endl;
    std::cout << "Waga: " << pies.getWaga() << " kg" << std::endl;

    std::cout << "\nZachowania psa:" << std::endl;
    pies.szczekanie();
    pies.machanieOgonem();
    pies.bieganie();
}