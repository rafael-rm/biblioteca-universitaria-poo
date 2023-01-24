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
#define EMPRESTAR 2

using namespace std;

int menu_principal();
int menu_crud();
void listar_acervo(list<AcervoBase*> acervo);
int menu_cadastrar();
void cadastrar_acervo(int id, list<AcervoBase*> &acervo);
AcervoBase* buscar_acervo(int id, list<AcervoBase*> acervo);
void remover_acervo(list<AcervoBase*>& acervo);
void editar_item(list<AcervoBase*> &acervo);
void emprestar_item(list<AcervoBase*> &acervo);
void imprimir_ficha(list<AcervoBase*> acervo);

int main(){
	int id_count = 0;
	int opcao, opcao_sub;

	list<AcervoBase*> acervo;
	list<AcervoBase*>::iterator it;

	
	system("pause");

	do
	{
		opcao = menu_principal();
		switch (opcao) {

		case EMPRESTAR:
			emprestar_item(acervo);
			system("pause > nul");
			break;

		case CRUD:
			do {
				opcao_sub = menu_crud();
				switch (opcao_sub) {
				case 1: // Listar
					cout << "Opcao 1" << endl;
					listar_acervo(acervo);
					system("pause > nul");
					break;
				case 2: // Cadastrar
					cout << "Opcao 2" << endl;
					cadastrar_acervo(id_count, acervo);
					system("pause > nul");
					break;
				case 3: // Remover
					cout << "Opcao 3" << endl;
					remover_acervo(acervo);
					system("pause > nul");
					break;
				case 4: // Editar
					cout << "Opcao 4" << endl;
					editar_item(acervo);
					system("pause > nul");
					break;
				}

			} while ((opcao_sub != 0));
			break;

		case 3:
			imprimir_ficha(acervo);
			system("pause > nul");
			break;
		}

		system("cls");
	} while ((opcao != 0));

	return 0;
}


int menu_principal(){
	int opcao = 0;
	do{
		system("cls");
		cout << "[INFO] Menu principal" << endl << endl;
		cout << "1- Gerenciar acervo" << endl;
		cout << "2- Emprestar item" << endl;
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

int menu_listar() {
	int opcao = 0;
	do {
		system("cls");
		cout << "[INFO] Menu Listar" << endl << endl;
		cout << "1 - Listar todos os itens" << endl;
		cout << "2 - Listar Livros" << endl;
		cout << "3 - Listar Mapas" << endl;
		cout << "4 - Listar Períodicos" <<  endl;
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

int menu_cadastrar() {
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

void cadastrar_acervo(int id, list<AcervoBase*> &acervo) {
	list<AcervoBase*>::iterator it;
	int opcao = menu_cadastrar();

	if (opcao == 0) return;

	AcervoBase* item;

	switch (opcao)
	{
		case 1:
			item = new Livro();
			break;
		case 2:
			item = new Mapa();
			break;
		case 3:
			item = new Periodico();
			break;
		case 4:
			item = new TCC();
			break;
		case 5:
			item = new Relatorio();
			break;
		case 6:
			item = new Cartaz();
			break;
		case 7:
			item = new Midia();
			break;
		default:
			item = new Livro();
			break;
	}

	item->cadastrar(++id);
	acervo.push_back(item);
}

AcervoBase* buscar_acervo(int id, list<AcervoBase*> acervo) {
	AcervoBase* item;
	list<AcervoBase*>::iterator it;

	for (it = acervo.begin(); it != acervo.end(); it++)
		if ((*it)->getId() == id) return (*it);
	

	return NULL;
}

void remover_acervo(list<AcervoBase*>& acervo) {
	int id;
	cout << "Entre com o id do item que deseja remover: " << endl;
	cin >> id;

	AcervoBase* item = buscar_acervo(id, acervo);
	if (item == NULL) {
		cout << "Item de id [" << id << "] não encontrado" << endl;
		return;
	}

	char opcao;
	cout << "Tem certeza que gostaria de remover o item do acervo(S/N)?" << endl;
	cin >> opcao;
	if (opcao == 'N') return;

	acervo.remove(item);

	cout << "Item removido com sucesso do acervo!" << endl;
}

void editar_item(list<AcervoBase*> &acervo){
	list<AcervoBase*>::iterator it;
	int id;

	cout << "Entre com o id do item que deseja editar" << endl;
	cin >> id;
	
	for (it = acervo.begin(); it != acervo.end(); it++){
		if ((*it)->getId() == id){
			(*it)->editar();
		} else {
			cout << "Item nao encontrado!" << endl;
		}
	}
}

void emprestar_item(list<AcervoBase*> &acervo){
	list<AcervoBase*>::iterator it;
	cout << "Entre com o id do item que deseja emprestar" << endl;
	int id;
	cin >> id;
	int exemplares, emprestados;
	for (it = acervo.begin(); it != acervo.end(); it++){
		if ((*it)->getId() == id){
			exemplares = (*it)->getQtdExemplares();
			emprestados = (*it)->getEmprestados();
			if (exemplares > emprestados){
				(*it)->setEmprestados(emprestados + 1);
				cout << "Item emprestado com sucesso" << endl;
				return;
			} else {
				cout << "Nao ha exemplares disponiveis" << endl;
				return;
			}
		}
	}
	cout << "Item nao encontrado" << endl;
	return;
}

void imprimir_ficha(list<AcervoBase*> acervo) {
	list<AcervoBase*>::iterator it;

	for (it = acervo.begin(); it != acervo.end(); it++) {
		(*it)->imprimir();
	}
}

