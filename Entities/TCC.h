#pragma once
#include "Documento.h"

enum EnumTCC {
	MONOGRAFIA,
	DISSERTACAO,
	TESE
};

class TCC : public Documento
{
	public:
	TCC();
	~TCC();
	
	EnumTCC getTipo();
	void setTipo(EnumTCC tipo);

	void imprimir();
	void cadastrar(int id);
	void registrar(ofstream& file);

	private:
		EnumTCC tipo;
};

