#include "AcervoBase.h"


AcervoBase::AcervoBase() {
	titulo = "Default";
	edicao = 0;
	cidade = "Default";
	editora = "Default";
	ano = 0;
	cdu = "Default";
	assunto = "Default";
	qtd_exemplares = 0;
}

AcervoBase::~AcervoBase() {
}


// Metodos GET
vector<string> AcervoBase::getAutores() {
	return autores;
}

string AcervoBase::getTitulo() {
	return titulo;
}

int AcervoBase::getEdicao() {
	return edicao;
}

string AcervoBase::getCidade() {
	return cidade;
}

string AcervoBase::getEditora() {
	return editora;
}

int AcervoBase::getAno() {
	return ano;
}

string AcervoBase::getCdu() {
	return cdu;
}

string AcervoBase::getAssunto() {
	return assunto;
}

vector<string> AcervoBase::getPalavrasChaves() {
	return palavras_chave;
}

int AcervoBase::getQtdExemplares() {
	return qtd_exemplares;
}


// Metodos SET
void AcervoBase::setAutor(string autor) {
	this->autores.push_back(autor);
}

void AcervoBase::setTitulo(string titulo) {
	this->titulo = titulo;
}

void AcervoBase::setEdicao(int edicao) {
	this->edicao = (edicao >= 1) ? edicao : 1;
}

void AcervoBase::setCidade(string cidade) {
	this->cidade = cidade;
}

void AcervoBase::setEditora(string editora) {
	this->editora = editora;
}

void AcervoBase::setAno(int ano) {
	this->ano = ano;
}

void AcervoBase::setCdu(string cdu) {
	this->cdu = cdu;
}

void AcervoBase::setAssunto(string assunto) {
	this->assunto = assunto;
}

void AcervoBase::setPalavraChave(string palavra_chave) {
	this->palavras_chave.push_back(palavra_chave);
}

void AcervoBase::setQtdExemplares(int qtd_exemplares) {
	this->qtd_exemplares = (qtd_exemplares > 0) ? qtd_exemplares : 0;
}

void AcervoBase::imprimir() {
	cout << "Autores: ";
	for (int i = 0; i < autores.size(); i++) {
		cout << autores[i] << "; ";
	}
	cout << endl;

	cout << "Titulo: " << titulo << endl;
	cout << "Edicao: " << edicao << endl;
	cout << "Cidade: " << cidade << endl;
	cout << "Editora: " << editora << endl;
	cout << "Ano: " << ano << endl;
	cout << "CDU: " << cdu << endl;
	cout << "Assunto: " << assunto << endl;
	cout << "Quantidade de exemplares: " << qtd_exemplares << endl;
	
	cout << "Palavras-chave: ";
	for (int i = 0; i < palavras_chave.size(); i++) {
		cout << palavras_chave[i] << "; ";
	}
	cout << endl;
};
