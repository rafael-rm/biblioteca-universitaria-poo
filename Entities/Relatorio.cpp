#include "Relatorio.h"


Relatorio::Relatorio() {
}

Relatorio::~Relatorio() {
}

void Relatorio::imprimir() {
	cout << "\t\tRelatorio" << endl;
	Documento::imprimir();
}

void Relatorio::cadastrar(int id) {
	cout << "\t\tCadastro de Relatorio" << endl;
	Documento::cadastrar(id);
}
