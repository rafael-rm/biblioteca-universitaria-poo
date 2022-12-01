#include <iostream>
#include <vector>
#include <list>

#include "Entities/Autor.h"
#include "Entities/AcervoBase.h"
#include "Entities/Cartaz.h"



using namespace std;


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


int menu(){
	int opcao = 0;
	do{
		system("cls");
		cout << "[INFO] Menu" << endl;
	} while (~opcao >= 0 && opcao <= 10);
	return opcao;
}