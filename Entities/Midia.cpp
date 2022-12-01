#include "Midia.h"


Midia::Midia() {
	tipo = EnumMidia::DVD;
}

Midia:: ~Midia() {
}

EnumMidia Midia::getTipo() {
	return this->tipo;
}

void Midia::setTipo(EnumMidia tipo) {
	this->tipo = tipo;
}