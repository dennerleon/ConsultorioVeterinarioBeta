// Cachorro.cpp
#include "Cachorro.hpp"

Cachorro::Cachorro(const string& nome, int idade) : Animal(nome, idade) {}
void Cachorro::fazerSom() const {
    cout << nome << " diz: Au Au!\n";
}