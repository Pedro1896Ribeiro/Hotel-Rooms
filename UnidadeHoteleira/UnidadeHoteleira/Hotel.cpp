#include <iostream>
#include "Hotel.h"

using namespace std;

double Hotel::checkOut(int quarto){
	Quarto *fq = findQuarto(quarto);

	if (fq != NULL) {
		return fq->checkOut();
	}
	else {
		cout << "Quarto: *" << quarto << "* nao existe!" << endl;
		return false;
	}
}
void Hotel::printQuartosDesocupados(){
	Colecao<Quarto>::iterator it;

	for ( it = quartos.begin(); it != quartos.end(); it++ ) {
		if (it->ocupado() == 0) {
			cout << "Desocupado ";
			it->print();
			cout << endl;
		}
	}
}
void Hotel::printHospedagensDeCliente(int id){
	Cliente *fc = findCliente(id);

	if (fc != NULL) {
		fc->printHospedagens();
		cout << endl;
	}
	else {
		cout << "Cliente: *" << id << "* nao existe!" << endl;
	}
}
double Hotel::totalFaturadoAoCliente(int id) {
	Cliente *fc = findCliente(id);

	if (fc != NULL) {
		return fc->totalFaturado();
	}
	else {
		cout << "Cliente: *" << id << "* nao existe!" << endl;
		return false;
	}
}
Quarto *Hotel::findQuarto(int num) {
	Quarto quarto(num, NULL, NULL);
	return quartos.find(quarto);
}
Cliente *Hotel::findCliente(int id) {
	Cliente cliente(id, "");
	return clientes.find(cliente);
}
bool Hotel::addQuarto(int camas, double preco) {
	Quarto quarto(quartos.size() + 1, camas, preco);
	cout << "Adicionar quarto com *" << camas << "* camas e com o preco: " << preco << " euros" << endl;
	return quartos.insert(quarto);
}
bool Hotel::addCliente(string nome) {
	Cliente cliente(clientes.size() + 1, nome);
	cout << "Adicionado o cliente *" << nome << "*" << endl;
	return clientes.insert(cliente);
}
bool Hotel::hospedar(int quarto, int cliente, double txdesc) {
	Quarto *fq = findQuarto(quarto);

	bool resultado = false;
	if (fq != NULL) {
		Cliente *fc = findCliente(cliente);
		if (fc != NULL) {
			resultado = fq->hospedar(fc, txdesc);
		}
	}
	return resultado;
}