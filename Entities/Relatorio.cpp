#include "Relatorio.h"


Relatorio::Relatorio() {
}

Relatorio::~Relatorio() {
}

void Relatorio::imprimir() {
	cout << "\t\tRelatorio" << endl;
	Documento::imprimir();
}
