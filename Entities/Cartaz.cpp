#include "Cartaz.h"

Cartaz::Cartaz() {
	tipo = EDUCATIVO;
}

Cartaz::~Cartaz() {
	
}

EnumCartaz Cartaz::getTipo() {
	return tipo;
}

void Cartaz::setTipo(EnumCartaz tipo) {
	this->tipo = tipo;
}

