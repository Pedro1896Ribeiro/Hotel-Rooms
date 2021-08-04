#include <iostream>
#include "Hospedagem.h"
#include "Quarto.h"

using namespace std;

Hospedagem::Hospedagem(double txdesc, Quarto *q, Cliente *c){
	txDesc = txdesc;
	numTotalHospedagens++;
	id = numTotalHospedagens;
	quarto = q;
	cliente = c;
	checkin = "HOJE";
}

double Hospedagem::checkOut() {
	checkout = "HOJE";
	return getCusto();
}
double Hospedagem::getCusto(){ 
	if ( (checkout - checkin) == 0 )
		custoTotal = (quarto->getPrecoDiario())*(1 - txDesc);
	else
		custoTotal= (((checkout - checkin)*quarto->getPrecoDiario())*(1 - txDesc));
	return custoTotal;
}
void Hospedagem::print(){
	cout << "CheckIn: " << checkin.data_str() << "\nCheckOut: " << checkout.data_str() << "\nCusto Hospedagem: "<<getCusto();
	cout << "\nQuarto: ";
	quarto->print();
	cout << endl;
}
bool Hospedagem::operator<(const Hospedagem &h) const {
	return (id < h.id);
}