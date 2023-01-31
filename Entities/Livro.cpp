#include "Livro.h"

Livro::Livro() {
    isbn = 9999999999999;
}

Livro::~Livro() {

}

long long Livro::getIsbn() {
	return isbn;
}

void Livro::setIsbn(long long isbn) {
    this->isbn = (isbn > 0) ? isbn : 9999999999999;
}

void Livro::imprimir() {
	Documento::imprimir();
	cout << "ISBN: " << getIsbn() << endl << endl;
	cout << "1. Assunto. " << getAssunto();
	for (int i = 0; i < getPalavrasChaves().size(); i++) {
		cout << getPalavrasChaves()[i] << ". ";
	}

	cout << endl << endl << "\t\t\t\t\t\tCDU: " << getCdu() << endl << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl << endl;
}

void Livro::cadastrar(int id) {
	cout << "\t\tCadastro de livro" << endl;
	Documento::cadastrar(id);
	long long isbn;

	cout << "Digite o ISBN: ";
	cin >> isbn;
	this->setIsbn(isbn);
}

void Livro::registrar(ofstream& file) {
	file.open("Livro.txt", ios::app);

	if (file.is_open()) {
		file << endl;
		Documento::registrar(file);

		file << getIsbn() << ";" << endl;
		file.close();
	}
}
