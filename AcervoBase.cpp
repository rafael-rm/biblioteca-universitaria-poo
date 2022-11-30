#include "AcervoBase.h"


AcervoBase::AcervoBase()
{		
	//autores;
	titulo = "Titulo";
	edicao = 1;
	cidade = "Cidade";
	editora = "Editora";
	ano = 1900;
	cdu = "1234567891234";
	assunto = "Assunto";
	//palavrasChave;
	qtdExemplares = 1;
}

AcervoBase::~AcervoBase()
{
}

string AcervoBase::getTitulo(){
	return titulo;
}

//vector<Autor*> AcervoBase::getAutores(){
//	return autores;
//}

string AcervoBase::getCidade(){
	return cidade;
}

string AcervoBase::getEditora(){
	return editora;
}

int AcervoBase::getAno(){
	return ano;
}

string AcervoBase::getCdu(){
	return cdu;
}

string AcervoBase::getAssunto(){
	return assunto;
}


//void AcervoBase::setAutor(string autor){
//	this->autores;
//}

void AcervoBase::setTitulo(string titulo){
	this->titulo = titulo;
}

void AcervoBase::setEditora(string editora){
	this->editora = editora;
}

void AcervoBase::setAno(int ano){
	this->ano = ano;
}

void AcervoBase::setCdu(string cdu){
	this->cdu = cdu;
}

void AcervoBase::setAssunto(string assunto){
	this->assunto = assunto;
}

//void AcervoBase::setPalavrasChave(string palavra_chave){
//	this->palavra_chave;
//}

