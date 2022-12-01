#include <iostream>
#include <vector>
#include <list>

#include "Entities/Autor.h"
#include "Entities/AcervoBase.h"
#include "Entities/Cartaz.h"

#define CRUD 1

using namespace std;

int menu_principal();
int menu_crud();


int main(){
	int opcao, opcao_sub;
	do
	{
		opcao = menu_principal();
		switch (opcao) {
		case CRUD:

			do {
				opcao_sub = menu_crud();
				switch (opcao_sub) {
				case 1: // Listar
					cout << "Opcao 1";
					system("pause > nul");
					break;
				case 2: // Cadastrar
					cout << "Opcao 2";
					system("pause > nul");
					break;
				case 3: // Remover
					cout << "Opcao 3";
					system("pause > nul");
					break;
				case 4: // Editar
					cout << "Opcao 4";
					system("pause > nul");
					break;
				}

			} while ((opcao_sub != 0));
			break;

		case 2:
			break;
		}

		system("cls");
	} while ((opcao != 0));



	Cartaz* livro = new Cartaz();
	livro->setAutor("Rafael");
	livro->setAutor("Laura");
	livro->setAutor("Guilherme");
	livro->setPalavraChave("C++");
	livro->setPalavraChave("Python");
	livro->setPalavraChave("Java");
	livro->imprimir();
	system("pause > nul");

	return 0;
}


int menu_principal(){
	int opcao = 0;
	do{
		system("cls");
		cout << "[INFO] Menu principal" << endl << endl;
		cout << "1- Gerenciar acervo" << endl;
		cout << endl << "Opcao: ";
		cin >> opcao;
		system("cls");
	} while (!(opcao >= 0 && opcao <= 4));
	return opcao;
}

int menu_crud() {
	int opcao = 0;
	do {
		system("cls");
		cout << "[INFO] Menu CRUD" << endl << endl;
		cout << "1- Listar item" << endl;
		cout << "2- Cadastrar item" << endl;
		cout << "3- Remover item" << endl;
		cout << "4- Editar item" << endl;
		cout << "0- Voltar para o menu principal" << endl;
		cout << endl << "Opcao: ";
		cin >> opcao;
		system("cls");
	} while (!(opcao >= 0 && opcao <= 4));
	return opcao;
}