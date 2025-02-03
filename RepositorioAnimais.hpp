// RepositorioAnimais.hpp
#ifndef REPOSITORIOANIMAIS_HPP
#define REPOSITORIOANIMAIS_HPP

#include "IAnimal.hpp"
#include <vector>

class RepositorioAnimais {
    private:
        vector<IAnimal*> animais;
        
    public:
        void adicionarAnimal(IAnimal* animal);
        void listarAnimais() const;
        const vector<IAnimal*>& getAnimais() const;
};

#endif // REPOSITORIOANIMAIS_HPP