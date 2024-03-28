#include "BienImmobilier.h"

#include <iostream>

BienImmobilier::BienImmobilier(int i, std::string add, float sur, std::string t, 
	std::string sta):id(i),addresse(add),surface(sur), type(t),statut(sta){}


BienImmobilier::BienImmobilier():id(0), addresse("0"), surface(0.f), 
	type("undef"),statut("undef"){}

void BienImmobilier::afficherDetails(){
	std::cout<<	"Voici les details du bien immobilier : "<<std::endl;
	std::cout<< "Son id : " << id << ", son addresse : " << addresse <<std::endl;
	std::cout<< "Sa surface : " << surface << ", son type : " << type ;
	std::cout<< std::endl << "Son statut : " << statut <<std::endl; 
}

void BienImmobilier::mettreAJourStatut(std::string nouveauStatut){
	statut=nouveauStatut;
}
