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
	file.open("Relatorio.txt", ios::app);

	if (file.is_open()) {
		file << endl;
		Documento::registrar(file);

		file << "\n";
		file.close();
	}
}
