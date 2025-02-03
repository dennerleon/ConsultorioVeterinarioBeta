
// Cachorro.hpp
#ifndef CACHORRO_HPP
#define CACHORRO_HPP

#include "Animal.hpp"
#include <iostream>

class Cachorro : public Animal {
public:
    Cachorro(const string& nome, int idade);
    void fazerSom() const override;
};

#endif // CACHORRO_HPP

