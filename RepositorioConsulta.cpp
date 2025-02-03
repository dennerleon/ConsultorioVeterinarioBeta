// RepositorioConsultas.cpp
#include "RepositorioConsulta.hpp"
#include <iostream>

void RepositorioConsultas::agendarConsulta(IAnimal* animal, const string& data) {
    consultas.emplace_back(animal, data);
}
void RepositorioConsultas::mostrarConsultas() const {
    for (const auto& consulta : consultas) {
        consulta.mostrarConsulta();
    }
}