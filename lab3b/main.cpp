#include "main.h"
#include "Commit.h"
#include "Repozytorium.h"
#include "Serwer_testujacy.h"
#include <iostream>

int main() {
    vector<Commit> commits = {
        Commit("a1b2c3d4", "jan_kowalski"),
        Commit("e5f6g7h8", "anna_nowak")
    };

    Repozytorium repo("MojProjekt", "jan_kowalski", commits);
    std::cout << "Repozytorium: " << repo.getNazwa() << ", wlasciciel: " << repo.getWlasciciel() << std::endl;

    repo.zmienNazwe("NowaNazwaProjektu");
    std::cout << "Po zmianie nazwy: " << repo.getNazwa() << std::endl;

    std::cout << "Commity w repozytorium:" << std::endl;
    for (Commit& c : repo.getCommity()) {
        std::cout << "  UUID: " << c.getUuid() << ", autor: " << c.getAutor() << std::endl;
    }

    Serwer_testujacy serwer("192.168.1.100");
    std::cout << "Serwer testujacy pod adresem: " << serwer.getAdres() << std::endl;

    return 0;
}

