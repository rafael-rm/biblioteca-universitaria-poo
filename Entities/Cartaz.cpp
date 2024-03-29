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

void Cartaz::imprimir() {
	Documento::imprimir();

	cout << "1. Assunto. " << getAssunto();
	for (int i = 0; i < getPalavrasChaves().size(); i++) {
		cout << getPalavrasChaves()[i] << ". ";
	}

	cout << endl << endl << "\t\t\t\t\t\tCDU: " << getCdu() << endl << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl << endl;

	/*switch
		(tipo) {
	case POLITICO:
		cout << "Tipo: Politico" << endl;
		break;
	case CULTURAL:
		cout << "Tipo: Cultural" << endl;
		break;
	case EDUCATIVO:
		cout << "Tipo: Educativo" << endl;
		break;
	default:
		cout << "Tipo: Invalido" << endl;
		break;
	}*/
}

void Cartaz::cadastrar(int id) {
	cout << "\t\tCadastro de Cartaz" << endl;
	Documento::cadastrar(id);
	int opcao;
	do {
		cout << "Tipo: " << endl;
		cout << "0 - Politico" << endl;
		cout << "1 - Cultural" << endl;
		cout << "2 - Educativo" << endl;
		cout << "Opcao: ";
		cin >> opcao;

		if (opcao < 0 || opcao > 2) {
			cout << "Opcao invalida!" << endl << endl;
		}
	} while (opcao < 0 || opcao > 2);
	
	switch (opcao) {
	case 0:
		setTipo(POLITICO);
		break;
	case 1:
		setTipo(CULTURAL);
		break;
	case 2:	
		setTipo(EDUCATIVO);
		break;
	default:
		setTipo(EDUCATIVO);
		break;
	}
}

void Cartaz::registrar(ofstream& file) {
	file.open("Cartaz.txt", ios::app);

	if (file.is_open()) {
		file << endl;
		Documento::registrar(file);

		file << getTipo() << ";\n";
		file.close();
	}
}
