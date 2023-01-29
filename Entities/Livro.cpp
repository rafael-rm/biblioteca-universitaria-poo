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

void Livro::cadastrar(int id) {
	cout << "\t\tCadastro de livro" << endl;
	Documento::cadastrar(id);
	long long isbn;

	cout << "Digite o ISBN: ";
	cin >> isbn;
	this->setIsbn(isbn);
}

void Livro::registrar(ofstream& file) {
	file.open("Livro.txt");

	if (file.is_open()) {
		Documento::registrar(file);

		file << getIsbn() << ";" << endl;
		file.close();
	}
}
