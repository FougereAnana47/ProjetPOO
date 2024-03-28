#include "Personne.h"

#include <iostream>

Personne::Personne(std::string n, std::string a, std::string t):nom(n),
	addresse(a), telephone(t){}


Personne::Personne(): nom("undef"), addresse("undef"),telephone("undef"){}

void Personne::afficherInfos(){
	std::cout<<"Voici les informations de la personne : " << std::endl;
	std::cout<<"Son nom : " << nom << ", son addresse : " << addresse << 
		std::endl;
	std::cout<<"Son telephone : " << telephone<<std::endl;
}

