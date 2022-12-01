#include "Autor.h"
Autor::Autor()
{
}


Autor::~Autor()
{
}

std::string Autor::getNome()
{
	return this->nome;
}

std::string Autor::getDataNascimento()
{
	return this->dataNascimento;
}

vector<AcervoBase*> Autor::getObras()
{
	return this->obras;
}

void Autor::setNome(std::string nome)
{
	this->nome = nome;
}

void Autor::setDataNascimento(std::string dataNascimento)
{
	this->dataNascimento = dataNascimento;
}

void Autor::setObras(AcervoBase* obra)
{
	this->obras.push_back(obra);
}
