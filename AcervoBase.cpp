#include "AcervoBase.h"


AcervoBase::AcervoBase() {
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
	cout << "Imprimir" << endl;
}
