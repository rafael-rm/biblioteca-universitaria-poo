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
    Documento::imprimir();

	cout << "1. Assunto. " << getAssunto();
	for (int i = 0; i < getPalavrasChaves().size(); i++) {
		cout << getPalavrasChaves()[i] << ". ";
	}

	cout << endl << endl << "\t\t\t\t\t\tCDU: " << getCdu() << endl << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl << endl;

    /*cout << "Tipo: ";
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
    }*/
}

void TCC::cadastrar(int id) {
    cout << "\t\tCadastro de TCC" << endl;
    Documento::cadastrar(id);

	int opcao;

	do {
		cout << "Informe o tipo: " << endl;
		cout << "0 - Monografia" << endl;
		cout << "1 - Dissertacao" << endl;
		cout << "2 - Tese" << endl;

		cin >> opcao;

		switch (opcao) {
		case 0:
			setTipo(MONOGRAFIA);
			break;
		case 1:
			setTipo(DISSERTACAO);
			break;
		case 2:
			setTipo(TESE);
			break;
		default:
			setTipo(MONOGRAFIA);
			break;
		}
	} while (opcao < 0 || opcao > 3);
}

void TCC::registrar(ofstream& file) {
	file.open("TCC.txt", ios::app);

	if (file.is_open()) {
		file << endl;
		Documento::registrar(file);

		file << getTipo() << ";";
		file.close();
	}
}