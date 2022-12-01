#include "Periodico.h"


Periodico::Periodico() {
}

Periodico::~Periodico() {

}


string Periodico::getIssn() {
	return this->ISSN;
}

EnumPeriodico Periodico::getTipo() {
	return this->tipo;
}


void Periodico::setIssn(string issn) {
	this->ISSN = issn;
}

void Periodico::setPeriodico(EnumPeriodico tipo) {
	this->tipo = tipo;
}
