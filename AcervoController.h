#include <iostream>
#include <vector>
#include <list>

#include "Menu.h"
#include "Entities/AcervoBase.h"
#include "Entities/Autor.h"
#include "Entities/AcervoBase.h"
#include "Entities/Cartaz.h"
#include "Entities/Livro.h"
#include "Entities/Mapa.h"
#include "Entities/Midia.h"
#include "Entities/Periodico.h"
#include "Entities/Relatorio.h"
#include "Entities/TCC.h"
#include "Entities/Documento.h"

#pragma once
class  AcervoController
{
	private:
		Menu* menu = new Menu();
		int id_counter = 0;

	public:
		void listar_acervo(list<AcervoBase*> acervo);
		void cadastrar_acervo(list<AcervoBase*> &acervo);
		AcervoBase* buscar_acervo(int id, list<AcervoBase*> acervo);
		void remover_acervo(list<AcervoBase*>& acervo);
		void editar_item(list<AcervoBase*> &acervo);
		void emprestar_item(list<AcervoBase*> &acervo);
		void imprimir_ficha(list<AcervoBase*> acervo);
		void pesquisar_acervo(list<AcervoBase*> acervo);
};