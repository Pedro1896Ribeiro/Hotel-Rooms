#include <iostream>
#include "Cliente.h"
#include "Hospedagem.h"

using namespace std;

Cliente::Cliente(int i, string n){
	id = i;
	nome = n;
}

void Cliente::printHospedagens() {
	cout << "\n\nCliente: " << nome << " (id " << id << ")\n\n";
	Colecao<Hospedagem*>::iterator it;

	for (it = hospedagens.begin(); it != hospedagens.end(); it++) {
		(*it)->print();
	}
	cout << "\n-----------------------------------------------------";
}
double Cliente::totalFaturado() const{
	Colecao<Hospedagem*>::iterator it;
	double soma=0;

	for (it = hospedagens.begin(); it != hospedagens.end(); it++) {
		soma += (*it)->getCusto();
	}
	return soma;
}
bool Cliente::hospedar(Hospedagem *h) {
	return hospedagens.insert(h);
}
bool Cliente::operator<(const Cliente &c) const {
	return id < c.id;
}
