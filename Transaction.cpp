#include "Transaction.h"

Transaction::Transaction(){
	this->dateTransaction="";
	this->idTransaction=-1;
	this->montant=-1.f;
}


Transaction::Transaction(int id, float m, std::string dT){
	idTransaction=id;
	montant=m;
	dateTransaction=dT;
}

int Transaction::GetId(){
	return this->idTransaction;
}

float Transaction::GetMontant(){
	return this->montant;
}
