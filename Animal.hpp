// Animal.hpp
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "IAnimal.hpp"

class Animal : public IAnimal {
protected:
    string nome;
    int idade;
public:
    Animal(const string& nome, int idade);
    virtual ~Animal();
    string getNome() const override;
    int getIdade() const override;
};

#endif // ANIMAL_HPP