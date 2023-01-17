#include <iostream>
#include <vector>
#include <list>

#include "Entities/Autor.h"
#include "Entities/AcervoBase.h"
#include "Entities/Cartaz.h"
#include "Entities/Livro.h"
#include "Entities/Mapa.h"
#include "Entities/Midia.h"
#include "Entities/Periodico.h"
#include "Entities/Relatorio.h"
#include "Entities/TCC.h"
#include "Entities/Documento.h"


#define CRUD 1

using namespace std;

int menu_principal();
int menu_crud();
void listar_acervo(list<AcervoBase*> acervo);


int main(){
	int opcao, opcao_sub;

	list<AcervoBase*> acervo;
	list<AcervoBase*>::iterator it;

	Cartaz* test = new Cartaz();

	test->cadastrar();

	acervo.push_back(test);

	system("pause");

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
					listar_acervo(acervo);
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

int menu_listar() {
	int opcao = 0;
	do {
		system("cls");
		cout << "[INFO] Menu Listar" << endl << endl;
		cout << "1- Listar todos os itens" << endl;
		cout << "2- Listar Livros" << endl;
		cout << "3- Listar Mapas" << endl;
		cout << "4- Listar Períodicos" <<  endl;
		cout << "5- Listar TCC's" << endl;
		cout << "6- Listar Relatórios" << endl;
		cout << "7- Listar Cartazes" << endl;
		cout << "8- Listar Midias" << endl;
		cout << "0- Voltar" << endl;
		cout << endl << "Opcao: ";
		cin >> opcao;
		system("cls");
	} while (!(opcao >= 0 && opcao <= 8));
	return opcao;
}

void listar_acervo(list<AcervoBase*> acervo) {
	list<AcervoBase*>::iterator it;
	int opcao = menu_listar();

	switch (opcao)
	{
		case 1:
			for (it = acervo.begin(); it != acervo.end(); it++)
				cout << "Id: " << (*it)->getId() << "; Titulo: " << (*it)->getTitulo() << ";" << endl;
			break;
		case 2:
			for (it = acervo.begin(); it != acervo.end(); it++)
				if (dynamic_cast<Livro*>((*it)))
					cout << "Id: " << (*it)->getId() << "; Titulo: " << (*it)->getTitulo() << ";" << endl;
			break;
		case 3:
			if (dynamic_cast<Mapa*>((*it)))
				for (it = acervo.begin(); it != acervo.end(); it++)
				cout << "Id: " << (*it)->getId() << "; Titulo: " << (*it)->getTitulo() << ";" << endl;
			break;
		case 4:
			if (dynamic_cast<Periodico*>((*it)))
				for (it = acervo.begin(); it != acervo.end(); it++)
				cout << "Id: " << (*it)->getId() << "; Titulo: " << (*it)->getTitulo() << ";" << endl;
			break;
		case 5:
			for (it = acervo.begin(); it != acervo.end(); it++)
				if (dynamic_cast<TCC*>((*it)))
					cout << "Id: " << (*it)->getId() << "; Titulo: " << (*it)->getTitulo() << ";" << endl;
			break;
		case 6:
			for (it = acervo.begin(); it != acervo.end(); it++)
				if (dynamic_cast<Relatorio*>((*it)))
					cout << "Id: " << (*it)->getId() << "; Titulo: " << (*it)->getTitulo() << ";" << endl;
			break;
		case 7:
			for (it = acervo.begin(); it != acervo.end(); it++)
				if (dynamic_cast<Cartaz*>(*it))
					cout << "Id: " << (*it)->getId() << "; Titulo: " << (*it)->getTitulo() << ";" << endl;
			break;
		case 8:
			for (it = acervo.begin(); it != acervo.end(); it++)
				if (dynamic_cast<Midia*>(*it))
					cout << "Id: " << (*it)->getId() << "; Titulo: " << (*it)->getTitulo() << ";" << endl;
			break;
		default:
			break;
	}
}
