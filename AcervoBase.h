#pragma once
#include <iostream>
#include <string>
#include <vector>


using namespace std;


	class AcervoBase
	{
	public:
		AcervoBase();
		~AcervoBase();

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

		virtual void imprimir();


	protected:
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
	};
