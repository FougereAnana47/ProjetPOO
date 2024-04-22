#include "BienImmobilier.h"

#include <iostream>
#include <string>

BienImmobilier::BienImmobilier(int i, std::string add, float sur, std::string t, 
	std::string sta) {
	try {
		if (i < 0)
		{
			throw std::range_error("L'id doit être supèrieur ou égal à 0.");
		}
		if (sur < 0)
		{
			throw std::range_error("La surface doit être supèrieur ou égal à 0.");
		}
		id = i;
		addresse = add;
		surface = sur;
		type = t;
		statut = sta;
	}
	catch (std::range_error& e) {
		std::cerr << "Exception lors de la création d'un bien immobilier : " << e.what() << std::endl;
	}
}

void BienImmobilier::afficherDetails(std::string prefix) const {
	std::cout << prefix << "Voici les details du bien immobilier : " << std::endl;
	std::cout << prefix << "Id : " << this->id 				   << std::endl;
	std::cout << prefix << "Adresse : " << this->addresse      << std::endl;
	std::cout << prefix << "Surface : " << this->surface       << std::endl;
	std::cout << prefix << "Type : " << this->type 			   << std::endl;
	std::cout << prefix << "Statut : " << this->statut 		   << std::endl;

	std::cout << "Contrats du bien-immobilier : " << std::endl;
	for (Contrat contrat : contrats) {
		std::cout << "| Id : " << contrat.GetId() << std::endl;
	}
}

void BienImmobilier::mettreAJourStatut(std::string nouveauStatut){
	statut = nouveauStatut;
}

void BienImmobilier::ajouterContrat(Contrat contrat){
	this->contrats.push_back(contrat);
}

std::string BienImmobilier::getAddress() const {
	return this->addresse;
}

std::string BienImmobilier::getType() const {
	return this->type;
}

int BienImmobilier::GetId() const {
	return this->id;
}
float BienImmobilier::GetSurface() const {
	return this->surface;
}

std::string BienImmobilier::GetStatut() const {
	return this->statut;
}

Maison::Maison(int id, std::string address, float surface, std::string statut, int rooms, float garden_surface) : 
	BienImmobilier(id, address, surface, "maison", statut) {
	try {
		if (rooms < 0)
		{
			throw std::range_error("Le nombre de pièces doit être supèrieur ou égal à 0.");
		}
		if (garden_surface < 0)
		{
			throw std::range_error("La surface du jardin doit être supèrieur ou égal à 0.");
		}
		this->rooms = rooms;
		this->garden_surface = garden_surface;
	}
	catch (std::range_error& e) {
		std::cerr << "Exception lors de la création de la maison : " << e.what() << std::endl;
	}
}

/* Overload in case of additional details */
void Maison::afficherDetails(std::string prefix) const {
	this->BienImmobilier::afficherDetails(prefix);
	std::cout << prefix << "Nombre de pièces : " << this->rooms 				      << std::endl;
	std::cout << prefix << "Jardin : " << (this->garden_surface > 0 ? "✔" : "✗")      << std::endl;
	if (this->garden_surface > 0)
		std::cout << prefix << "Surface du Jardin : " << this->garden_surface << "m²" << std::endl;
}




Appartement::Appartement(int id, std::string address, float surface, std::string statut, int rooms) : 
	BienImmobilier(id, address, surface, "appartement", statut){
	try {
		if (rooms < 0)
		{
			throw std::range_error("Le nombre de pièces doit être supèrieur ou égal à 0.");
		}
		this->rooms = rooms;
	}
	catch (std::range_error& e) {
		std::cerr << "Exception lors de la création de l'appartement : " << e.what() << std::endl;
	}
}

/* Overload in case of additional details */
void Appartement::afficherDetails(std::string prefix) const  {
	this->BienImmobilier::afficherDetails(prefix);
	std::cout << prefix << "Nombre de pièces : " << this->rooms << std::endl;
}




Terrain::Terrain(int id, std::string address, float surface, std::string statut) :
	BienImmobilier(id, address, surface, "terrain", statut) {

}

/* Overload in case of additional details */
void Terrain::afficherDetails(std::string prefix) const {
	this->BienImmobilier::afficherDetails(prefix);
}
