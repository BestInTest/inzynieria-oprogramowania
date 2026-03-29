#include "Main.h"
#include "Biblioteka.h"
#include <iostream>

using namespace std;

int main() {
    Biblioteka biblioteka("Biblioteka Miejska", "ul. Ksiazkowa 1, Warszawa");
    cout << "Nazwa biblioteki: " << biblioteka.getNazwa() << endl;
    cout << "Adres: " << biblioteka.getAdres() << endl << endl;

    Ksiazka k1("Pan Tadeusz", "Adam Mickiewicz", "123-54-16-01231-1");
    k1.dodajRozdzial(Rozdzial(1, "PT R1", 10));
    k1.dodajRozdzial(Rozdzial(2, "PT R2", 35));
    k1.dodajRozdzial(Rozdzial(3, "PT R3", 16));

    Ksiazka k2("Lalka", "Boleslaw Prus", "314-34-01-02342-2");
    k2.dodajRozdzial(Rozdzial(1, "lalka rozdzial 1", 10));
    k2.dodajRozdzial(Rozdzial(2, "lalka rozdzial 2", 58));

    Ksiazka k3("Quo Vadis", "Henryk Sienkiewicz", "654-73-54-63403-3");

    biblioteka.dodajKsiazke(k1);
    biblioteka.dodajKsiazke(k2);
    biblioteka.dodajKsiazke(k3);

    cout << "Ksiazki w bibliotece (" << biblioteka.getKsiazki().size() << "):" << endl;
    for (Ksiazka& k : biblioteka.getKsiazki()) {
        cout << " - \"" << k.getTytul() << "\" | Autor: " << k.getAutor() << " | ISBN: " << k.getNumerISBN() << endl;
        for (Rozdzial& r : k.getRozdzialy()) {
            cout << "     Rozdzial " << r.getNumerRozdzialu() << ": " << r.getTytulRozdzialu() << " (" << r.getLiczbaStron() << " stron)" << endl;
        }
    }

    cout << endl << "Usuwanie ksiazki o ISBN 314-34-01-02342-2" << endl;
    biblioteka.usunKsiazke("314-34-01-02342-2");

    biblioteka.zmienNazwe("Biblioteka Narodowa");
    cout << "Nowa nazwa biblioteki: " << biblioteka.getNazwa() << endl;

    cout << endl << "Ksiazki po usuwaniu (" << biblioteka.getKsiazki().size() << "):" << endl;
    for (Ksiazka& k : biblioteka.getKsiazki()) {
        cout << " - \"" << k.getTytul() << "\" | " << k.getAutor() << endl;
    }

    return 0;
}