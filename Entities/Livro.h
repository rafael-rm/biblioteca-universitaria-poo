#pragma once
#include "Documento.h"


class Livro : public Documento
{
	public:
		Livro();
		~Livro();

        long long getIsbn();
		void setIsbn(long long isbn);


	private:
		long long isbn;
};

