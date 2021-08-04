#include <iostream>
#include "Quarto.h"
#include "Hospedagem.h"
#include "Cliente.h"

using namespace std;

Quarto::Quarto(int n, int c, double preco){
	num = n;
	camas = c;
	precoDiario = preco;
}

int Quarto::getNum() const {
	return num;
}
double Quarto::getPrecoDiario() const {
	return precoDiario;
}
double Quarto::checkOut() {
	return hospedagem->checkOut();
}
void Quarto::print() const {
	cout << "Quarto: *" << num << "*" << endl;
}
bool Quarto::ocupado()const {
	if (hospedagem == NULL) {
		return 0;
	}
	else return 1;
}
bool Quarto::hospedar(Cliente *c, double txdesc) {
	Hospedagem h(txdesc, this, c);
	
	if (c != NULL) {
		cliente=c;
		hospedagens.insert(h);
		hospedagem = hospedagens.find(h);
		return cliente->hospedar(hospedagem);
	}
	else {
		return false;
	}
}
bool Quarto::operator<(const Quarto &q) const {
	return num < q.num;
}