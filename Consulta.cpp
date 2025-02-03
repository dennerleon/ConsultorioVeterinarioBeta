// Consulta.cpp
#include "Consulta.hpp"
#include <iostream>

Consulta::Consulta(IAnimal* animal, const string& data) : animal(animal), data(data) {}
void Consulta::mostrarConsulta() const {
    cout << "Consulta para " << animal->getNome() << " em " << data << "\n";
}

