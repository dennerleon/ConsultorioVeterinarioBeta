
// Consulta.hpp
#ifndef CONSULTA_HPP
#define CONSULTA_HPP

#include "IAnimal.hpp"
#include <string>

class Consulta {
private:
    IAnimal* animal;
    string data;
public:
    Consulta(IAnimal* animal, const string& data);
    void mostrarConsulta() const;
};

#endif // CONSULTA_HPP