#include "Mapa.h"


Mapa::Mapa() {
	tipo = EnumMapa::HISTORICO;
}

Mapa::~Mapa() {
}

EnumMapa Mapa::getTipo() {
	return this->tipo;
}

void Mapa::setTipo(EnumMapa tipo) {
	this->tipo = tipo;
}
void Mapa::imprimir(){
	cout<<"\t\tMapa " << endl;
	Documento::imprimir();
	switch (tipo) {
	case EnumMapa::MPOLITICO:
		cout << "Tipo: Politico" << endl;
		break;
	case EnumMapa::DEMOGRAFICO:
		cout << "Tipo: Demografico " << endl;
		break;
	case EnumMapa::HISTORICO:
		cout << "Tipo: Historico " << endl;
		break;
	case EnumMapa::ECONOMICO:
		cout << "Tipo: Economico " << endl;
		break;
	default:
		cout << "Tipo: Invalido " << endl;
	}

}
void Mapa::cadastrar(){
	cout << "\t\tCadastro de Mapa" << endl;
	Documento::cadastrar();
	int opcao;
	do {
		cout << "Tipo: " << endl;
		cout << "0 - Politico" << endl;
		cout << "1 - Demografico" << endl;
		cout << "2 - Historico" << endl;
		cout << "3 - Economico" << endl;
		cout << "Opcao: ";
		cin >> opcao;
		if (opcao < 0 || opcao > 3) {
			cout << "Opcao invalida!" << endl << endl;
		}
	} while (opcao < 0 || opcao > 3);

	switch (opcao) {
	case 0:
		setTipo(MPOLITICO);
		break;
	case 1:
		setTipo(DEMOGRAFICO);
		break;
	case 2:	
		setTipo(HISTORICO);
		break;
	case 3:
		setTipo(ECONOMICO);
		break;
	default:
		setTipo(ECONOMICO);
		break;
	}

}