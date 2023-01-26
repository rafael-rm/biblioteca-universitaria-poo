#include "AcervoController.h"

void AcervoController::listar_acervo(list<AcervoBase*> acervo)
{
	list<AcervoBase*>::iterator it;
	int opcao = menu->menu_listar();

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

void AcervoController::cadastrar_acervo(list<AcervoBase*>& acervo)
{
	list<AcervoBase*>::iterator it;
	int opcao = menu->menu_cadastrar();

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

	item->cadastrar(++this->id_counter);
	acervo.push_back(item);
}

AcervoBase* AcervoController::buscar_acervo(int id, list<AcervoBase*> acervo)
{
	AcervoBase* item;
	list<AcervoBase*>::iterator it;

	for (it = acervo.begin(); it != acervo.end(); it++)
		if ((*it)->getId() == id) return (*it);


	return NULL;
}

void AcervoController::remover_acervo(list<AcervoBase*>& acervo)
{
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

void AcervoController::editar_item(list<AcervoBase*>& acervo)
{
	list<AcervoBase*>::iterator it;
	int id;

	cout << "Entre com o id do item que deseja editar" << endl;
	cin >> id;

	for (it = acervo.begin(); it != acervo.end(); it++) {
		if ((*it)->getId() == id) {
			(*it)->editar();
		}
		else {
			cout << "Item nao encontrado!" << endl;
		}
	}
}

void AcervoController::emprestar_item(list<AcervoBase*>& acervo)
{
	list<AcervoBase*>::iterator it;
	cout << "Entre com o id do item que deseja emprestar" << endl;
	int id;
	cin >> id;
	int exemplares, emprestados;
	for (it = acervo.begin(); it != acervo.end(); it++) {
		if ((*it)->getId() == id) {
			exemplares = (*it)->getQtdExemplares();
			emprestados = (*it)->getEmprestados();
			if (exemplares > emprestados) {
				(*it)->setEmprestados(emprestados + 1);
				cout << "Item emprestado com sucesso" << endl;
				return;
			}
			else {
				cout << "Nao ha exemplares disponiveis" << endl;
				return;
			}
		}
	}
	cout << "Item nao encontrado" << endl;
	return;
}

void AcervoController::imprimir_ficha(list<AcervoBase*> acervo)
{
	list<AcervoBase*>::iterator it;

	for (it = acervo.begin(); it != acervo.end(); it++) {
		(*it)->imprimir();
	}
}

void AcervoController::pesquisar_acervo(list<AcervoBase*> acervo)
{
	cout << "\t\tPesquisa de item no acervo:" << endl;

	cout << "\nInforme o id do item: ";
	int id;
	cin >> id;

	AcervoBase* item = buscar_acervo(id, acervo);
	if (item == NULL) {
		cout << "Item não encontrado no acervo!" << endl;
	}
	else {
		item->imprimir();
	}
}
