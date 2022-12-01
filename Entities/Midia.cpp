#include "Midia.h"


Midia::Midia() {
	tipo = EnumMidia::DVD;
}

Midia:: ~Midia() {
}

EnumMidia Midia::getTipo() {
	return this->tipo;
}

void Midia::setTipo(EnumMidia tipo) {
	this->tipo = tipo;
}

void Midia::imprimir() {
	cout << "\t\tMidia" << endl;
	AcervoBase::imprimir();

	cout << "Tipo: ";
	switch (this->tipo) {
		case 0: 
			cout << "fita" << endl;
			break;
		case 1:
			cout << "VHS" << endl;
			break;
		case 2:
			cout << "CD" << endl;
			break;
		case 3:
			cout << "DVD" << endl;
			break;
		default:
			cout << "midia" << endl;
			break;
	}
}