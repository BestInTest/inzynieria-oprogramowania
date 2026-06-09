#include "Main.h"
#include "Client.h"
#include "CombustionVehicleFactory.h"
#include "ElectricVehicleFactory.h"
#include <iostream>

int main() {
	std::cout << "Test fabryki pojazdow spalinowych" << std::endl;
	IVehicleFactory* combustionFactory = new CombustionVehicleFactory();
	Client* client1 = new Client(combustionFactory);
	client1->createVehicles();
	client1->useVehicles();
	delete client1;
	delete combustionFactory;

	std::cout << std::endl;
	std::cout << "Test fabryki pojazdow elektrycznych" << std::endl;
	IVehicleFactory* electricFactory = new ElectricVehicleFactory();
	Client* client2 = new Client(electricFactory);
	client2->createVehicles();
	client2->useVehicles();
	delete client2;
	delete electricFactory;

	return 0;
}
