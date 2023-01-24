#include "Documento.h"

Documento::Documento(){
	num_pag = 1;
	tam_pag = 30;
}

Documento::~Documento(){

}

int Documento::getNumPag(){
	return num_pag;
}

float Documento::getTamPag(){
	return tam_pag;
}

void Documento::setNumPag(int num_pag){
	this->num_pag = (num_pag > 0) ? num_pag : 1;
}

void Documento::setTamPag(float tam_pag){
	this->tam_pag = (tam_pag > 0.0) ? tam_pag : 30;
}

void Documento::imprimir(){
	AcervoBase::imprimir();
	cout << getNumPag() << " pág: " << getTamPag() << "cm" << endl << endl;
}

void Documento::cadastrar(int id){
	AcervoBase::cadastrar(id);
	cout << "Digite o numero de paginas: ";
	int num_pag;
	cin >> num_pag;
	setNumPag(num_pag);

	cout << "Digite o tamanho da pagina: ";
	float tam_pag;
	cin >> tam_pag;
	setTamPag(tam_pag);
}