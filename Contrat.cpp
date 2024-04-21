#include "Contrat.h"

#include <iostream>

Contrat::Contrat(int id, std::string d, std::string ty, std::string te):
	idContrat(id),date(d),typeContrat(ty),termesContrat(te),signe(false){}
		
Contrat::Contrat():idContrat(0),date("undef"),typeContrat("undef"),termesContrat("undef"),signe(false) {} // on le garde ? 

void Contrat::afficherContrat() const {
	std::cout<<"Voici les détails du contrat : "<<std::endl;
	std::cout<<"Son id : "<<idContrat <<", son type : " << typeContrat <<
		std::endl;
	std::cout<<"Sa date : " << date << ", ses termes : " << termesContrat <<
		std::endl;
	std::cout << "Le contrat est-il signé : " << (signe?"oui":"non")<<std::endl;
}

void Contrat::signerContrat(){
	// comment on fait ? 2 options (voir pour d'autres alternatives aussi) : 
	// 1) rajouter un attribut booleen signe 
	// 2) On choisit de mettre date comme non définis et cette dernière sera
	// définis seulement lorsque le contrat sera signé
	//
	// Vous en pensez quoi ? 


	// Pour l'instant je pars sur la première option car plus simple
	signe=true;
}

int Contrat::GetId() const {
	return this->idContrat;
}

