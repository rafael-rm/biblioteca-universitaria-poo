#pragma once
#include <string>
#include <vector>


using namespace std;


	class AcervoBase
	{
	public:
		AcervoBase();
		~AcervoBase();

		string getTitulo();
		//vector<Autor*> getAutores();
		int getEdicao();
		string getCidade();
		string getEditora();
		int getAno();
		string getCdu();
		string getAssunto();
		vector<string> getPalavrasChaves();

		void setTitulo(string titulo);
		void setAutor(string autor);
		void setEdicao(int edicao);
		void setCidade(string cidade);
		void setEditora(string editora);
		void setAno(int ano);
		void setCdu(string cdu);
		void setAssunto(string assunto);
		void setPalavrasChave(string palavra);


	protected:
		//vector<Autor*> autores;
		string titulo;
		int edicao;
		string cidade;
		string editora;
		int ano;
		string cdu;
		string assunto;
		vector<string> palavrasChave;
		int qtdExemplares;
	};
