#pragma once
#include "Documento.h"


enum EnumCartaz {
	POLITICO,
	CULTURAL,
	EDUCATIVO
};


class Cartaz : public Documento
{
	public:
		Cartaz();
		~Cartaz();
		
		EnumCartaz getTipo();
		void setTipo(EnumCartaz tipo);
		
		void imprimir();
		void cadastrar(int id);
		void registrar(ofstream& file);
	
	private:
		EnumCartaz tipo;
};

