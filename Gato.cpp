// Gato.cpp
#include "Gato.hpp"

Gato::Gato(const string& nome, int idade) : Animal(nome, idade) {}
void Gato::fazerSom() const {
    cout << nome << " diz: Miau!\n";
}

