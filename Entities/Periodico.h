#pragma once
#include "Documento.h"


enum EnumPeriodico {
	REVISTA,
	JORNAL
};


class Periodico : public Documento
{
	public:
		Periodico();
		~Periodico();

		string getIssn();
		EnumPeriodico getTipo();

		void setIssn(string issn);
		void setPeriodico(EnumPeriodico tipo);

		void imprimir();
		void cadastrar(int id);
		void registrar(ofstream& file);


	protected:
		string ISSN;
		EnumPeriodico tipo;

};

