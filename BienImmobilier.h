#ifndef BIEN_IMMOBILIER_H_
#define BIEN_IMMOBILIER_H_

#include <iostream>

class BienImmobilier {
	protected:
		int id;
		std::string addresse;
		float surface;
		std::string type;
		std::string statut;
	public:
		BienImmobilier(int id, std::string address, float surface, std::string type, std::string statut);
		BienImmobilier(); // définis un bien immobilier avec des valeurs 
						  // "par défaut" => est ce qu'on le garde ? 

		virtual void afficherDetails(std::string prefix = "");
		void mettreAJourStatut(std::string nouveauStatut);

		std::string getAddress();
		std::string getType();
};

class Maison : public BienImmobilier {
	private:
		int rooms;
		float garden_surface;
	public:
		Maison(int id, std::string address, float surface, std::string statut, int rooms, float garden_surface);

		void afficherDetails(std::string prefix = "");
};


class Appartement : public BienImmobilier{
	private:
		int rooms;
	public:
		Appartement(int id, std::string address, float surface, std::string statut, int rooms);

		void afficherDetails(std::string prefix = "");
};

class Terrain : public BienImmobilier{
	public:
		Terrain(int id, std::string address, float surface, std::string statut);

		void afficherDetails(std::string prefix = "");
};

#endif
