#pragma once
#include "Documento.h"


enum EnumMapa {
	POLITICO,
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


	protected:
		EnumMapa tipo;
};

