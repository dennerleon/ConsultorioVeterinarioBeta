// RepositorioConsultas.hpp
#ifndef REPOSITORIOCONSULTAS_HPP
#define REPOSITORIOCONSULTAS_HPP

#include "Consulta.hpp"
#include <vector>

class RepositorioConsultas {
private:
    vector<Consulta> consultas;
public:
    void agendarConsulta(IAnimal* animal, const string& data);
    void mostrarConsultas() const;
};

#endif // REPOSITORIOCONSULTAS_HPP