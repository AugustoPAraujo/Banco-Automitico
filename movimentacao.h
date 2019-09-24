#ifndef MOVIMENTACAO_H
#define MOVIMENTACAO_H

#include <iostream>
#include <string>
#include <vector>
#include <ctime>

using std::string;

class Movimentacao{
	private:
	vector<string> dataMov;
	string descricao;
	char debitoCredito;
	double valor;

	public:
	Movimentacao(string d, char op, double v);
	string getDataMov();
	string getDescricao();
	char getOp();
	double getValor();
};

#endif //MOVIMENTACAO_H
