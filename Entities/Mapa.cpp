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
	case EnumMapa::POLITICO:
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