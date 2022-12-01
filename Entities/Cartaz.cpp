#include "Cartaz.h"

Cartaz::Cartaz() {
	tipo = EDUCATIVO;
}

Cartaz::~Cartaz() {
	
}

EnumCartaz Cartaz::getTipo() {
	return tipo;
}

void Cartaz::setTipo(EnumCartaz tipo) {
	this->tipo = tipo;
}

void Cartaz::imprimir() {
	cout << "\t\tCartaz" << endl;
	AcervoBase::imprimir();
	switch
		(tipo) {
	case POLITICO:
		cout << "Tipo: Politico" << endl;
		break;
	case CULTURAL:
		cout << "Tipo: Cultural" << endl;
		break;
	case EDUCATIVO:
		cout << "Tipo: Educativo" << endl;
		break;
	default:
		cout << "Tipo: Invalido" << endl;
		break;
	}
}

