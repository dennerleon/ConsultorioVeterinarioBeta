// ClinicaVeterinaria.cpp
#include "ClinicaVeterinaria.hpp"

void ClinicaVeterinaria::adicionarAnimal(IAnimal* animal) {
    repositorioAnimais.adicionarAnimal(animal);
}
void ClinicaVeterinaria::agendarConsulta(IAnimal* animal, const string& data) {
    repositorioConsultas.agendarConsulta(animal, data);
}
void ClinicaVeterinaria::listarAnimais() const {
    repositorioAnimais.listarAnimais();
}
void ClinicaVeterinaria::mostrarConsultas() const {
    repositorioConsultas.mostrarConsultas();
}

const vector<IAnimal*>& ClinicaVeterinaria::getAnimais() const {
  return repositorioAnimais.getAnimais();
}

