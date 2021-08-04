#pragma once
#include "Colecao.h"
#include "Quarto.h"
#include "Cliente.h"

using namespace std;

class Hotel{
	Colecao<Quarto> quartos;
	Colecao<Cliente> clientes;
	Quarto *findQuarto(int num);
	Cliente *findCliente(int id);

public:
	bool addQuarto(int camas, double preco);
	bool addCliente(string nome);
	bool hospedar(int quarto, int cliente, double txdesc);
	double checkOut(int quarto);
	void printQuartosDesocupados();
	void printHospedagensDeCliente(int id);
	double totalFaturadoAoCliente(int id);
};