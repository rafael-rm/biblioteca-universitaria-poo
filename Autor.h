#pragma once

#include "AcervoBase.h"


using namespace std;


class Autor
{
	public:
		Autor();
		~Autor();
		
		string getNome();
		string getDataNascimento();
		vector<AcervoBase*> getObras();

		void setNome(string nome);
		void setDataNascimento(string dataNascimento);
		void setObras(AcervoBase* obra);

	protected:
		string nome;
		string dataNascimento;
		vector<AcervoBase*> obras;
};

