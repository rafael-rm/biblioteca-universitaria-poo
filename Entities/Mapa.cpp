#include "Mapa.h"


Mapa::Mapa() {
	tipo = EnumMapa::HISTORICO;
}

Mapa::~Mapa() {
}

EnumMapa Mapa::getTipo() {
	return this->tipo;
}

void Mapa::setTipo(EnumMapa tipo) {
	this->tipo = tipo;
}
