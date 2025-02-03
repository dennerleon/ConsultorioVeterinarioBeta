// ClinicaVeterinaria.hpp
#ifndef CLINICAVETERINARIA_HPP
#define CLINICAVETERINARIA_HPP

#include "RepositorioAnimais.hpp"
#include "RepositorioConsulta.hpp"

class ClinicaVeterinaria {
private:
    //vector<IAnimal*> animais;
    RepositorioAnimais repositorioAnimais;
    RepositorioConsultas repositorioConsultas;
public:
    void adicionarAnimal(IAnimal* animal);
    void agendarConsulta(IAnimal* animal, const string& data);
    void listarAnimais() const;
    void mostrarConsultas() const;
    const vector<IAnimal*>& getAnimais() const;  // Método para acessar os animais
};

#endif // CLINICAVETERINARIA_HPP
