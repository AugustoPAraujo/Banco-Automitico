#include <iostream>
#include <string>

#include "cliente.h"

Cliente::Cliente(string n, string c, string e, string f){
	nomeCliente = n;
	cpf_cnpj = c;
	endereco = e;
	fone = f;
}

string Cliente::getNome{ return nomeCliente; }
string Cliente::getCpf_cnpj{ return cpf_cnpj; }
string Cliente::getEndereco{ return endereco; }
string Cliente::getFone{ return fone; }

void Cliente::setNome(string n){ nomeCliente = n; }
void Cliente::setCpf_cnpj(string c){ cpf_cnpj = c; }
void Cliente::setEndereco(string e){ endereco = e; }
void Cliente::setFone(string f){ fone = f; }