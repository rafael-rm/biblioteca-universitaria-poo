#pragma once
#include "Documento.h"


class Livro : public Documento
{
	public:
		Livro();
		~Livro();

        long long getIsbn();
		void setIsbn(long long isbn);

		void imprimir();
		void cadastrar();
	

	private:
		long long isbn;
};


