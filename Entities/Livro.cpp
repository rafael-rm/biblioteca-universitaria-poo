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
	cout << "\t\tLivro" << endl;
	Documento::imprimir();
	cout << "ISBN: " << isbn << endl;
}

void Livro::cadastrar() {
	cout << "\t\tCadastro de livro" << endl;
	Documento::cadastrar();
	long long isbn;

	cout << "Digite o ISBN: ";
	cin >> isbn;
	this->setIsbn(isbn);
}