#pragma once
#include "AcervoBase.h"


class Documento : public AcervoBase
{
	public:
		Documento();
		~Documento();

		int getNumPag();
		float getTamPag();

		void setNumPag(int num_pag);
		void setTamPag(float tam_pag);

		void imprimir();
		void cadastrar(int id);
		void registrar(ofstream& file);

	protected:
		int num_pag;
		float tam_pag;
};