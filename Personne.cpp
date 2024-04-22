#include "Personne.h"

#include <iostream>

Personne::Personne(std::string n, std::string a, std::string t):nom(n),
	addresse(a), telephone(t){}

void Personne::afficherInfos() const {
	std::cout << "Voici les informations de la personne : " 			  << std::endl;
	std::cout << "Son nom : " << nom << ", son addresse : " << addresse << std::endl;
	std::cout << "Son telephone : " << telephone 						  << std::endl;
}

std::string Personne::GetNom() const {
	return this->nom;
}


Client::Client(std::string name, std::string address, std::string phone) : 
	Personne(name, address, phone) {

}

void Client::afficherInfos() const {
	this->Personne::afficherInfos();
	std::cout << "Contrats : " << std::endl;

	for (Contrat* contrat : contrats) {
		std::cout << "| ------------------------------" << std::endl;
		contrat->afficherContrat();
	}
}



Proprietaire::Proprietaire(std::string name, std::string address, std::string phone, std::vector<BienImmobilier*> biens) :
	Personne(name, address, phone) {
	this->biens = biens;
}

void Proprietaire::afficherInfos() const {
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

void Locataire::afficherInfos() const {
	this->Personne::afficherInfos();
	std::cout << "Bien : " << bien->getAddress() << std::endl;
}
