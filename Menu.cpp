#include "Menu.h"

int Menu::menu_principal() {
	int opcao = 0;
	do {
		system("cls");
		cout << "[INFO] Menu principal" << endl << endl;
		cout << "1 - Gerenciar acervo" << endl;
		cout << "2 - Emprestar item" << endl;
		cout << "3 - Imprimir ficha cartográfica" << endl;
		cout << "4 - Pesquisar item no acervo" << endl;
		cout << endl << "Opcao: ";
		cin >> opcao;
		system("cls");
	} while (!(opcao >= 0 && opcao <= 4));
	return opcao;
}

int Menu::menu_crud() {
	int opcao = 0;
	do {
		system("cls");
		cout << "[INFO] Menu CRUD" << endl << endl;
		cout << "1 - Listar item" << endl;
		cout << "2 - Cadastrar item" << endl;
		cout << "3 - Remover item" << endl;
		cout << "4 - Editar item" << endl;
		cout << "0 - Voltar para o menu principal" << endl;
		cout << endl << "Opcao: ";
		cin >> opcao;
		system("cls");
	} while (!(opcao >= 0 && opcao <= 4));
	return opcao;
}

int Menu::menu_listar() {
	int opcao = 0;
	do {
		system("cls");
		cout << "[INFO] Menu Listar" << endl << endl;
		cout << "1 - Listar todos os itens" << endl;
		cout << "2 - Listar Livros" << endl;
		cout << "3 - Listar Mapas" << endl;
		cout << "4 - Listar Períodicos" << endl;
		cout << "5 - Listar TCC's" << endl;
		cout << "6 - Listar Relatórios" << endl;
		cout << "7 - Listar Cartazes" << endl;
		cout << "8 - Listar Midias" << endl;
		cout << "0 - Voltar" << endl;
		cout << endl << "Opcao: ";
		cin >> opcao;
		system("cls");
	} while (!(opcao >= 0 && opcao <= 8));
	return opcao;
}

int Menu::menu_cadastrar() {
	int opcao = 0;
	do {
		system("cls");
		cout << "[INFO] Informe o item a ser cadastrado" << endl << endl;
		cout << "1 - Cadastrar Livro" << endl;
		cout << "2 - Cadastrar Mapa" << endl;
		cout << "3 - Cadastrar Períodico" << endl;
		cout << "4 - Cadastrar TCC" << endl;
		cout << "5 - Cadastrar Relatório" << endl;
		cout << "6 - Cadastrar Cartaz" << endl;
		cout << "7 - Cadastrar Midia" << endl;
		cout << "0 - Voltar" << endl;
		cout << endl << "Opcao: ";
		cin >> opcao;
		system("cls");
	} while (!(opcao >= 0 && opcao <= 8));
	return opcao;
}