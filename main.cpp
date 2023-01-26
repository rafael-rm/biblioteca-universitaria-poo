#include <iostream>
#include <vector>
#include <list>

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

	Menu* menu = new Menu();
	AcervoController* controller = new AcervoController();

	list<AcervoBase*> acervo;
	list<AcervoBase*>::iterator it;

	while (!login()) {
		cout << "[ERRO] Login ou senha incorretos" << endl;
		system("pause > nul");
		system("cls");
	}

	do
	{
		opcao = menu->menu_principal();
		switch (opcao) {

		case CRUD:
			do {
				opcao_sub = menu->menu_crud();
				switch (opcao_sub) {
				case 1: // Listar
					cout << "Opcao 1" << endl;
					controller->listar_acervo(acervo);
					system("pause > nul");
					break;
				case 2: // Cadastrar
					cout << "Opcao 2" << endl;
					controller->cadastrar_acervo(acervo);
					system("pause > nul");
					break;
				case 3: // Remover
					cout << "Opcao 3" << endl;
					controller->remover_acervo(acervo);
					system("pause > nul");
					break;
				case 4: // Editar
					cout << "Opcao 4" << endl;
					controller->editar_item(acervo);
					system("pause > nul");
					break;
				}

			} while ((opcao_sub != 0));
			break;
		case EMPRESTAR:
			controller->emprestar_item(acervo);
			system("pause > nul");
			break;
		case IMPRIMIRFICHA:
			controller->imprimir_ficha(acervo);
			system("pause > nul");
			break;
		case PESQUISAR:
			controller->pesquisar_acervo(acervo);
			system("pause > nul");
			break;
		}

		system("cls");
	} while ((opcao != 0));

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
