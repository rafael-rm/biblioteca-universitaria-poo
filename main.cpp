#include <iostream>
#include <vector>
#include <list>

#include "Autor.h"
#include "AcervoBase.h"


using namespace std;


int main(){
	Autor* teste = new Autor();

	teste->setNome("Gui");
	teste->setDataNascimento("29-12-22");

	AcervoBase* teste2 = new AcervoBase();

	teste->setObras(teste2);

	return 0;
}