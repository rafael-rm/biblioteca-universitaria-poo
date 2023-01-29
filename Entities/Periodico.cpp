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
	cout << "ISSN: " << this->ISSN << endl;
	cout << "Tipo: " << this->tipo << endl;
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
	file.open("Periodico.txt");

	if (file.is_open()) {
		Documento::registrar(file);

		file << getIssn() << "; " << getTipo() << ";" << endl;
		file.close();
	}
}
