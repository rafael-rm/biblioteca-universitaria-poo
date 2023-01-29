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
		void cadastrar(int id);
		void registrar(ofstream& file);

	private:
		long long isbn;
};


