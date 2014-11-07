#include "Cliente.h"


Cliente::Cliente(void)
{
}

Cliente::Cliente(string nome, int ID,float horasMes){
	this->nome=nome;
	this->ID=ID;
	this->horasMes=horasMes;
};

Cliente::~Cliente(void){}

void Cliente::imprime_Cliente(){cout<<endl<<ID<<" - "<<nome;}

void cRegistado::imprime_Cliente(){
	Cliente::imprime_Cliente();
	float hRestantes; //inacabado
}

cRegistado::~cRegistado(void){}
cOcasional::~cOcasional(void){}

cRegistado::cRegistado(string nome, int ID, float horasMes, int mensalidade): Cliente(nome,ID,horasMes){
	if(mensalidade==1) {mensalidade=69,6; horasPagas=24;}
	else if(mensalidade==2) {mensalidade=124.8; horasPagas=48;}
	else if(mensalidade==3) {mensalidade=220.8; horasPagas=96;}
	else {mensalidade=250; horasPagas=744;} //744 � o numero de horas de um m�s de 31 dias
	this->horasPagas=horasPagas;
}


cOcasional::cOcasional(string nome, int ID, float horasMes, float totalMes): Cliente(nome,ID,horasMes){this->totalMes=totalMes;}

void cOcasional::imprime_Cliente(){
	Cliente::imprime_Cliente();
	float hRestantes; //inacabado
}