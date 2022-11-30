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

	AcervoBase* livro = new AcervoBase();

	livro->setPalavraChave("As longas tranças de um careca");
	livro->setPalavraChave("Gui é um cara maluco");
	vector<string> palavras = livro->getPalavrasChaves();
	std::cout << "tfeste" << endl;
	

	return 0;
}