#pragma once
#include "Colecao.h"
#include "Hospedagem.h"

using namespace std;

class Cliente;

class Quarto{
	int num;
	int camas;
	double precoDiario;
	Colecao<Hospedagem> hospedagens;
	Cliente *cliente;
	Hospedagem *hospedagem;

public:
	Quarto(int n, int c, double preco);
	bool ocupado() const;
	int getNum() const;
	double getPrecoDiario() const;
	bool hospedar(Cliente *c, double txdesc);
	double checkOut();
	void print() const;
	bool operator<(const Quarto &q) const;
};
