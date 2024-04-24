#include "Transaction.h"

Transaction::Transaction(){
	this->dateTransaction="";
	this->idTransaction=-1;
	this->montant=-1.f;
}

Transaction::Transaction(int id, float m, std::string dT){
	try {
		if (id < 0)
		{
			throw std::range_error("L'id doit être supèrieur ou égal à 0.");
		}
		if (m < 0)
		{
			throw std::range_error("Le montant doit être supèrieur ou égal à 0.");
		}
		idTransaction = id;
		montant = m;
		dateTransaction = dT;
	}
	catch (std::range_error& e) {
		std::cerr << "Exception lors de la création d'une transaction : " << e.what() << std::endl;
	}
}

int Transaction::GetId(){
	return this->idTransaction;
}

float Transaction::GetMontant(){
	return this->montant;
}


void Transaction::afficherDetails(){
	std::cout<<"Id de la transaction : "<<this->idTransaction<<std::endl
		<<"Montant de la transaction : "<<this->montant<<std::endl
		<<"Date de la transaction : " << this->dateTransaction<<std::endl;
}
