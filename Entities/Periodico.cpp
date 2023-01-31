#include "Periodico.h"


Periodico::Periodico() {
	ISSN = "";
	tipo = REVISTA;

}

Periodico::~Periodico() {

}


string Periodico::getIssn() {
	return this->ISSN;
}

EnumPeriodico Periodico::getTipo() {
	return this->tipo;
}


void Periodico::setIssn(string issn) {
	this->ISSN = issn;
}

void Periodico::setPeriodico(EnumPeriodico tipo) {
	this->tipo = tipo;
}

void Periodico::imprimir() {
	Documento::imprimir();
	cout << "ISSN: " << getIssn() << endl << endl;
	cout << "1. Assunto. " << getAssunto();
	for (int i = 0; i < getPalavrasChaves().size(); i++) {
		cout << getPalavrasChaves()[i] << ". ";
	}

	cout << endl << endl << "\t\t\t\t\t\tCDU: " << getCdu() << endl << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl << endl;

}

void Periodico::cadastrar(int id) {
	cout << "\t\tCadastro de Periodico" << endl;
	Documento::cadastrar(id);
	
	string issn;
	cout << "Digite o ISSN: ";
	cin >> issn;
	this->setIssn(issn);
}

void Periodico::registrar(ofstream& file) {
	file.open("Periodico.txt", ios::app);

	if (file.is_open()) {
		file << endl;
		Documento::registrar(file);

		file << getIssn() << "; " << getTipo() << ";\n";
		file.close();
	}
}
