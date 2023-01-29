#pragma once
#include "Documento.h"


class Relatorio : public Documento
{
	public:
		Relatorio();
		~Relatorio();

		void imprimir();
		void cadastrar(int id);
		void registrar(ofstream& file);
};

