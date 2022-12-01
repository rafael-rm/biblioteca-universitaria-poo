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

void TCC::imprimir() {
    cout << "\t\tTrabalho de Conclusao de Curso" << endl;
    Documento::imprimir();

    cout << "Tipo: ";
    switch (this->tipo) {
        case 0:
            cout << "Monografia" << endl;
            break;
        case 1:
            cout << "Dissertacao" << endl;
            break;
        case 2:
            cout << "Tese" << endl;
            break;
    }
}