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
	file.open("TCC.txt");

	if (file.is_open()) {
		Documento::registrar(file);

		file << getTipo() << ";" << endl;
		file.close();
	}
}