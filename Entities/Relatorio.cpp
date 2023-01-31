#include "Relatorio.h"


Relatorio::Relatorio() {
}

Relatorio::~Relatorio() {
}

void Relatorio::imprimir() {
	Documento::imprimir();
	cout << "1. Assunto. " << getAssunto();
	for (int i = 0; i < getPalavrasChaves().size(); i++) {
		cout << getPalavrasChaves()[i] << ". ";
	}

	cout << endl << endl << "\t\t\t\t\t\tCDU: " << getCdu() << endl << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl << endl;

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
