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

void Midia::imprimir() {
	AcervoBase::imprimir();

	cout << "1. Assunto. ";
	for (int i = 0; i < getPalavrasChaves().size(); i++) {
		cout << getPalavrasChaves()[i] << ". ";
	}

	cout << endl << endl << "\t\t\t\t\t\tCDU: " << getCdu() << endl << endl;
	cout << "-----------------------------------------------------------------------------------------" << endl << endl;

	/*cout << "Tipo: ";
	switch (this->tipo) {
		case 0: 
			cout << "fita" << endl;
			break;
		case 1:
			cout << "VHS" << endl;
			break;
		case 2:
			cout << "CD" << endl;
			break;
		case 3:
			cout << "DVD" << endl;
			break;
		default:
			cout << "midia" << endl;
			break;
	}*/
}

void Midia::cadastrar(int id) {
	cout << "\t\tCadastro de mídia" << endl;
	AcervoBase::cadastrar(id);
	int opcao = 0;

	do {
		cout << "Informe o tipo: " << endl;
		cout << "0 - Fita" << endl;
		cout << "1 - VHS" << endl;
		cout << "2 - CD" << endl;
		cout << "3 - DVD" << endl;
		cout << "Opcao: ";

		cin >> opcao;
	} while (opcao < 0 || opcao > 3);
	
	switch (opcao) {
	case 0:
		setTipo(FITA);
		break;
	case 1:
		setTipo(VHS);
		break;
	case 2:
		setTipo(CD);
		break;
	case 3:
		setTipo(DVD);
		break;
	default:
		setTipo(FITA);
		break;
	}
}

void Midia::registrar(ofstream& file) {
	file.open("Midia.txt");

	if (file.is_open()) {
		AcervoBase::registrar(file);
		
		file << getTipo() << ";" << endl;
		file.close();
	}
}
