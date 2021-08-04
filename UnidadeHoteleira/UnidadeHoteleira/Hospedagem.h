#pragma once
#include "TData.h"
using namespace std;

class Cliente;
class Quarto;

class Hospedagem{
	static int numTotalHospedagens;
	int id;
	double txDesc;
	double custoTotal;
	TData checkin;
	TData checkout;
	Cliente *cliente;
	Quarto *quarto;

public:
	Hospedagem(double txdesc, Quarto *q, Cliente *c);
	double checkOut();
	double getCusto();
	void print();
	bool operator<(const Hospedagem &q) const;
};


