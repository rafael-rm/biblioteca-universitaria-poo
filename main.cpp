#include <iostream>
#include <vector>
#include <list>

#include "Entities/Autor.h"
#include "Entities/AcervoBase.h"


using namespace std;


int main(){
	AcervoBase* livro = new AcervoBase();
	livro->setAutor("Rafael");
	livro->setAutor("Laura");
	livro->setAutor("Guilherme");
	livro->setPalavraChave("C++");
	livro->setPalavraChave("Python");
	livro->setPalavraChave("Java");
	cout << "teste" << endl;
	livro->imprimir();
	system("pause > nul");
	return 0;
}


int menu(){
	int opcao = 0;
	do{
		system("cls");
		cout << "[INFO] Menu" << endl;
	} while (~opcao >= 0 && opcao <= 10);
	return opcao;
}