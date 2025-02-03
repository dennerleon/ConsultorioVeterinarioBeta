
// Gato.hpp
#ifndef GATO_HPP
#define GATO_HPP

#include "Animal.hpp"
#include <iostream>

class Gato : public Animal {
public:
    Gato(const string& nome, int idade);
    void fazerSom() const override;
};

#endif // GATO_HPP

