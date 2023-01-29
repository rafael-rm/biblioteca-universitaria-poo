#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>


using namespace std;


class AcervoBase
{
public:
	AcervoBase();
	~AcervoBase();

	int getId();
	vector<string> getAutores();
	string getTitulo();
	int getEdicao();
	string getCidade();
	string getEditora();
	int getAno();
	string getCdu();
	string getAssunto();
	vector<string> getPalavrasChaves();
	int getQtdExemplares();
	int getEmprestados();
		
	void setId(int id);
	void setAutor(string autor); 
	void setTitulo(string titulo);
	void setEdicao(int edicao);
	void setCidade(string cidade);
	void setEditora(string editora);
	void setAno(int ano);
	void setCdu(string cdu);
	void setAssunto(string assunto);
	void setPalavraChave(string palavra);
	void setQtdExemplares(int qtd_exemplares);
	void setEmprestados(int emprestados);

	virtual void imprimir();
	virtual void cadastrar(int id);
	virtual void editar();
	virtual void registrar(ofstream& file);

protected:
	int id;
	vector<string> autores;
	string titulo;
	int edicao;
	string cidade;
	string editora;
	int ano;
	string cdu;
	string assunto;
	vector<string> palavras_chave;
	int qtd_exemplares;
	int emprestados;
};
