#include "Contrat.h"
#include "Personne.h"
#include "BienImmobilier.h"

#include <iostream>

Contrat::Contrat(int id, std::string d, std::string ty, std::string te){
	try {
		if (id < 0)
		{
			throw std::range_error("L'id doit être supèrieur ou égal à 0.");
		}
		idContrat = id;
		date = d;
		typeContrat = ty;
		termesContrat = te;
		signe = false;
	}
	catch (std::range_error& e) {
		std::cerr << "Exception lors de la création d'un contrat : " << e.what() << std::endl;
	}
}
		
Contrat::Contrat():idContrat(0),date("undef"),typeContrat("undef"),termesContrat("undef"),signe(false) {} // on le garde ? 

void Contrat::afficherContrat() const {
	std::cout<<"Voici les détails du contrat : "<<std::endl;
	std::cout<<"Son id : "<<idContrat <<", son type : " << typeContrat <<
		std::endl;
	std::cout<<"Sa date : " << date << ", ses termes : " << termesContrat <<
		std::endl;
	std::cout << "Le contrat est-il signé : " << (signe?"oui":"non")<<std::endl;
	
	std::cout << "Clients du contrat : " << std::endl;

	for (Client* client : clients) {
		std::cout << "| Nom : " << client->GetNom() << std::endl;
	}

	std::cout << "Biens du contrat : " << std::endl;

	for (BienImmobilier* bien : biens) {
		std::cout << "| ------------------------------" << std::endl;
		std::cout << "| Id : " << bien->GetId() << std::endl;
	}
}

void Contrat::signerContrat(){
	// comment on fait ? 2 options (voir pour d'autres alternatives aussi) : 
	// 1) rajouter un attribut booleen signe 
	// 2) On choisit de mettre date comme non définis et cette dernière sera
	// définis seulement lorsque le contrat sera signé
	//
	// Vous en pensez quoi ? 


	// Pour l'instant je pars sur la première option car plus simple
	try {
		if (signe)
		{
			throw EX_DejaSigne();
		}
		signe = true;
	}
	catch (EX_DejaSigne) {
		std::cerr << "Exception lors de la signature d'un contrat : Le contrat a déjà été signé." << std::endl;
	}
}

int Contrat::GetId() const {
	return this->idContrat;
}

