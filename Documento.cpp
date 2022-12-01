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
