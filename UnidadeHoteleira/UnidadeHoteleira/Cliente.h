#pragma once
#include <string>
#include "Colecao.h"

using namespace std;

class Hospedagem;

class Cliente{
	int id;
	string nome;
	Colecao<Hospedagem*> hospedagens;

public:
	Cliente(int i, string n);
	bool hospedar(Hospedagem *h);
	void printHospedagens();
	double totalFaturado()const;
	bool operator<(const Cliente &c) const;
};
