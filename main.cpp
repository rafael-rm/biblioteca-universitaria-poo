#include <iostream>
#include <vector>
#include <list>
#include <fstream>
#include "AcervoController.h"

#define LOGIN "admin"
#define SENHA "admin"

#define CRUD 1
#define EMPRESTAR 2
#define IMPRIMIRFICHA 3
#define PESQUISAR 4

using namespace std;

bool login();

int main(){
	int opcao, opcao_sub;

	list<AcervoBase*> acervo;
	list<AcervoBase*>::iterator it;

	while (!login()) {
		cout << "[ERRO] Login ou senha incorretos" << endl;
		system("pause > nul");
		system("cls");
	}

	do
	{
		opcao = Menu().menu_principal();
		switch (opcao) {

		case CRUD:
			do {
				opcao_sub = Menu().menu_crud();
				switch (opcao_sub) {
				case 1: // Listar
					cout << "Opcao 1" << endl;
					AcervoController().listar_acervo(acervo);
					system("pause > nul");
					break;
				case 2: // Cadastrar
					cout << "Opcao 2" << endl;
					AcervoController().cadastrar_acervo(acervo);
					system("pause > nul");
					break;
				case 3: // Remover
					cout << "Opcao 3" << endl;
					AcervoController().remover_acervo(acervo);
					system("pause > nul");
					break;
				case 4: // Editar
					cout << "Opcao 4" << endl;
					AcervoController().editar_item(acervo);
					system("pause > nul");
					break;
				}

			} while ((opcao_sub != 0));
			break;
		case EMPRESTAR:
			AcervoController().emprestar_item(acervo);
			system("pause > nul");
			break;
		case IMPRIMIRFICHA:
			AcervoController().imprimir_ficha(acervo);
			system("pause > nul");
			break;
		case PESQUISAR:
			AcervoController().pesquisar_acervo(acervo);
			system("pause > nul");
			break;
		}

		system("cls");
	} while ((opcao != 0));


	ofstream f;
	for (it = acervo.begin(); it != acervo.end(); it++) {
		(*it)->registrar(f);
	}

	return 0;
}

bool login() {
	string login, senha;
	cout << "Login: ";
	cin >> login;
	cout << "Senha: ";
	cin >> senha;
	if (login == LOGIN && senha == SENHA) {
		return true;
	}
	return false;
}
