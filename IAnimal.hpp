#ifndef IANIMAL_HPP
#define IANIMAL_HPP

#include <string>
using namespace std;

class IAnimal {
public:
    virtual ~IAnimal() = default; // Melhor usar = default para indicar implementação padrão
    virtual void fazerSom() const = 0;
    virtual string getNome() const = 0;
    virtual int getIdade() const = 0;
};

#endif
