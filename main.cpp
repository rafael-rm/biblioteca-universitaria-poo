#include <iostream>
#include <vector>
#include <list>

#include "Entities/Autor.h"
#include "Entities/AcervoBase.h"


using namespace std;


int main(){
	Autor* teste = new Autor();

	teste->setNome("Gui");
	teste->setDataNascimento("29-12-22");

	AcervoBase* livro = new AcervoBase();

	livro->setPalavraChave("As longas tranças de um careca");
	livro->setPalavraChave("Gui é um cara maluco");
	vector<string> palavras = livro->getPalavrasChaves();

	return 0;
}


int menu(){
	int opcao = 0;
	do{
		system("cls");
		cout << "[INFO] Menu" << endl;
	} while (!opcao >= 0 && opcao <= 10);
	return opcao;
}