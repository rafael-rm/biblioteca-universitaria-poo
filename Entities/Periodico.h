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


	protected:
		string ISSN;
		EnumPeriodico tipo;

};

