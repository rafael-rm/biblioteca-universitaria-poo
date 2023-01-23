#pragma once
#include "Documento.h"


enum EnumMapa {
	MPOLITICO,
	DEMOGRAFICO,
	HISTORICO,
	ECONOMICO
};


class Mapa : public Documento
{
	public:
		Mapa();
		~Mapa();

		EnumMapa getTipo();
		void setTipo(EnumMapa tipo);

		void imprimir();
		void cadastrar(int id);

	protected:
		EnumMapa tipo;
};

