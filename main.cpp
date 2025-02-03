#include <iostream>
#include <limits>
#include "ClinicaVeterinaria.hpp"
#include "Gato.hpp"
#include "Cachorro.hpp"

using namespace std;

int main() {
    ClinicaVeterinaria clinica;
    int opcao;

    do {
        cout << "\n===== Clínica Veterinária =====" << endl;
        cout << "1. Adicionar Gato" << endl;
        cout << "2. Adicionar Cachorro" << endl;
        cout << "3. Listar Animais" << endl;
        cout << "4. Agendar Consulta" << endl;
        cout << "5. Mostrar Consultas" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        if (cin.fail()) { // Verifica se a entrada é inválida
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignora a entrada inválida
            cout << "Entrada inválida! Digite um número." << endl;
            continue;
        }


        if (opcao == 1) {
            string nome;
            int idade;
            cout << "Nome do gato: ";
            cin >> nome;
            cout << "Idade do gato: ";
            cin >> idade;
            IAnimal* gato = new Gato(nome, idade);
            clinica.adicionarAnimal(gato);
            cout << "Gato cadastrado com sucesso!" << endl;
        } 
        else if (opcao == 2) {
            string nome;
            int idade;
            cout << "Nome do cachorro: ";
            cin >> nome;
            cout << "Idade do cachorro: ";
            cin >> idade;
            IAnimal* cachorro = new Cachorro(nome, idade);
            clinica.adicionarAnimal(cachorro);
            cout << "Cachorro cadastrado com sucesso!" << endl;
        } 
        else if (opcao == 3) {
            cout << "\nLista de Animais:\n";
            clinica.listarAnimais();
        } 
        else if (opcao == 4) {
            string nome, data;
            cout << "Nome do animal para consulta: ";
            cin >> nome;
            cout << "Data da consulta (DD/MM/YYYY): ";
            cin >> data;

            // Buscar o animal pelo nome
            IAnimal* animalEncontrado = nullptr;
            for (auto* animal : clinica.getAnimais()) {
                if (animal->getNome() == nome) {
                    animalEncontrado = animal;
                    cout<<" \nEntrei!" << endl;
                    break;
                }
            }

            if (animalEncontrado) {
                clinica.agendarConsulta(animalEncontrado, data);
                cout << "Consulta agendada com sucesso!" << endl;
            } else {
                cout << "Animal não encontrado!" << endl;
            }
        } 
        else if (opcao == 5) {
            cout << "\nConsultas Agendadas:\n";
            clinica.mostrarConsultas();
        } 
        else if (opcao == 0) {
            cout << "Encerrando o programa..." << endl;
        } 
        else {
            cout << "Opção inválida! Tente novamente." << endl;
        }

    } while (opcao != 0); // Mantém o programa rodando até o usuário escolher sair

    return 0;
}