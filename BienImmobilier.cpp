#include "BienImmobilier.h"

#include <iostream>

BienImmobilier::BienImmobilier(int i, std::string add, float sur, std::string t, 
	std::string sta):id(i),addresse(add),surface(sur), type(t),statut(sta) { }

BienImmobilier::BienImmobilier():id(0), addresse("0"), surface(0.f), 
	type("undef"),statut("undef") { }

void BienImmobilier::afficherDetails() {
	std::cout << "Voici les details du bien immobilier : " << std::endl;
	std::cout << "Id : " << this->id 				   << std::endl;
	std::cout << "Adresse : " << this->addresse        << std::endl;
	std::cout << "Type : " << this->type 			   << std::endl;
	std::cout << "Statut : " << this->statut 		   << std::endl;
}

void BienImmobilier::mettreAJourStatut(std::string nouveauStatut){
	statut = nouveauStatut;
}

std::string BienImmobilier::getAddress() {
	return this->addresse;
}



Maison::Maison(int id, std::string address, float surface, std::string statut, int rooms, float garden_surface) : 
	BienImmobilier(id, address, surface, "maison", statut) {
	this->rooms = rooms;
	this->garden_surface = garden_surface;
}

/* Overload in case of additional details */
void Maison::afficherDetails() {
	this->BienImmobilier::afficherDetails();
	std::cout << "Nombre de pièces : " << this->rooms 				        << std::endl;
	std::cout << "Jardin : " << (this->garden_surface > 0 ? "✔" : "✗")      << std::endl;
	if (this->garden_surface > 0)
		std::cout << "Surface du Jardin : " << this->garden_surface << "m²" << std::endl;
}




Appartement::Appartement(int id, std::string address, float surface, std::string statut, int rooms) : 
	BienImmobilier(id, address, surface, "appartement", statut){
	this->rooms = rooms;
}

/* Overload in case of additional details */
void Appartement::afficherDetails() {
	this->BienImmobilier::afficherDetails();
	std::cout << "Nombre de pièces : " << this->rooms << std::endl;
}




Terrain::Terrain(int id, std::string address, float surface, std::string statut) :
	BienImmobilier(id, address, surface, "terrain", statut) {

}

/* Overload in case of additional details */
void Terrain::afficherDetails() {
	this->BienImmobilier::afficherDetails();
}