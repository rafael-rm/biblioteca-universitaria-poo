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

void Relatorio::registrar(ofstream& file) {
	file.open("Relatorio.txt");

	if (file.is_open()) {
		Documento::registrar(file);

		file << endl;
		file.close();
	}
}
