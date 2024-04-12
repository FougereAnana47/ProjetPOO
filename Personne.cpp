#include "Personne.h"

#include <iostream>

Personne::Personne(std::string n, std::string a, std::string t):nom(n),
	addresse(a), telephone(t){}


Personne::Personne(): nom("undef"), addresse("undef"),telephone("undef") { }

void Personne::afficherInfos() {
	std::cout << "Voici les informations de la personne : " 			  << std::endl;
	std::cout << "Son nom : " << nom << ", son addresse : " << addresse << std::endl;
	std::cout << "Son telephone : " << telephone 						  << std::endl;
}




Client::Client(std::string name, std::string address, std::string phone) : 
	Personne(name, address, phone) {

}

void Client::afficherInfos() {
	this->Personne::afficherInfos();
}



Proprietaire::Proprietaire(std::string name, std::string address, std::string phone, std::vector<BienImmobilier*> biens) :
	Personne(name, address, phone) {
	this->biens = biens;
}

void Proprietaire::afficherInfos() {
	this->Personne::afficherInfos();
	std::cout << "Biens : " << std::endl;

	for (BienImmobilier* bien : biens) {
		std::cout << "| ------------------------------" << std::endl;
		bien->afficherDetails("| ");
	}
}



Locataire::Locataire(std::string name, std::string address, std::string phone, BienImmobilier* bien) :
	Personne(name, address, phone) {
	this->bien = bien;
}

void Locataire::afficherInfos() {
	this->Personne::afficherInfos();
	std::cout << "Bien : " << bien->getAddress() << std::endl;
}
