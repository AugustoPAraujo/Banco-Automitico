#include <iostream>
#include <list>
#include <string>

#IFNDEF CONTA_H
#DEFINE CONTA_H

class Conta{
	private:
	int numConta;
	double saldo;
	Cliente cliente;
	list<movimentacoes> movimentacoes;
	int static proximoNumConta;

	public:
	Conta(Cliente c);
	int getNumConta();
	double getSaldo();
	Cliente getCliente();
	list<movimentacoes> getMovimentacoes();
	void debitar(double v, string d);

}

#endif