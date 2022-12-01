#include "TCC.h"

TCC::TCC() {
    tipo = DISSERTACAO;
}

TCC::~TCC() {

}

EnumTCC TCC::getTipo() {
	return tipo;
}

void TCC::setTipo(EnumTCC tipo) {
    this->tipo = tipo;
}