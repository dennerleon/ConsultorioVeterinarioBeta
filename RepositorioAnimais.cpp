
#include "RepositorioAnimais.hpp"
#include <iostream>

void RepositorioAnimais::adicionarAnimal(IAnimal* animal) {
    animais.push_back(animal); // Adiciona o animal ao vetor de animais
}
void RepositorioAnimais::listarAnimais() const {
    for (const auto& animal : animais) {
        cout << "Nome: " << animal->getNome() << ", Idade: " << animal->getIdade() << "\n";
    }
}

const vector<IAnimal*>& RepositorioAnimais::getAnimais() const {
    return this->animais;
}
