#include <iostream>
#include "Hotel.h"

using namespace std;
int Hospedagem::numTotalHospedagens = 0;

void main() {


	Hotel hotel;

	cout << "***************************************************** " << endl;
	cout << "**                                                 ** " << endl;
	cout << "**                  BEM VINDO AO                   ** " << endl;
	cout << "**          SISTEMA DE GESTAO DE HOTEIS            ** " << endl;
	cout << "**                                                 ** " << endl;
	cout << "***************************************************** \n" << endl;

	system("pause");

	cout << "\n***************************************************** " << endl;
	cout << "**                CRIACAO DE QUARTOS               ** " << endl;
	cout << "***************************************************** \n" << endl;

	hotel.addQuarto(2, 10);
	hotel.addQuarto(3, 20);
	hotel.addQuarto(4, 30);
	hotel.addQuarto(5, 40);
	cout << "\n";

	system("pause");

	cout << "\n***************************************************** " << endl;
	cout << "**               CRIACAO DE CLIENTES               ** " << endl;
	cout << "***************************************************** \n" << endl;

	hotel.addCliente("Joana");
	hotel.addCliente("Pedro");
	hotel.addCliente("Sofia");
	hotel.addCliente("Miguel");
	cout << "\n";
	system("pause");

	cout << "\n***************************************************** " << endl;
	cout << "**                 REGISTO DE HOSPEDAGENS          ** " << endl;
	cout << "***************************************************** \n" << endl;

	hotel.printQuartosDesocupados();

	hotel.hospedar(1,1,0);
	hotel.hospedar(4, 2, 0.5);
	hotel.hospedar(2, 3, 0.1);

	cout << "Valor a pagar: " << hotel.checkOut(1) << endl;
	cout << "Valor a pagar: " << hotel.checkOut(4) << endl;
	cout << "Valor a pagar: " << hotel.checkOut(2) << endl;

	cout << "Total Faturado: " << hotel.totalFaturadoAoCliente(1) << endl;
	cout << "Total Faturado: " << hotel.totalFaturadoAoCliente(2) << endl;
	cout << "Total Faturado: " << hotel.totalFaturadoAoCliente(3) << endl;

	cout << "\n";

	cout << "\n***************************************************** " << endl;
	cout << "**             VISUALIZACAO DE HOSPEDAGENS         ** " << endl;
	cout << "***************************************************** \n" << endl;

	hotel.printHospedagensDeCliente(1);
	hotel.printHospedagensDeCliente(2);
	hotel.printHospedagensDeCliente(3);

	cout << "\n";

	cout << "\n***************************************************** " << endl;
	cout << "**                  FIM DE EXECUCAO                ** " << endl;
	cout << "***************************************************** \n" << endl;
	system("pause");

}