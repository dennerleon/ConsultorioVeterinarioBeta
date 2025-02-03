// Animal.cpp
#include "Animal.hpp"

Animal::Animal(const string& nome, int idade) : nome(nome), idade(idade) {}
Animal::~Animal() {}
string Animal::getNome() const { return nome; }
int Animal::getIdade() const { return idade; }
