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

		virtual void afficherDetails(std::string prefix = "") const;
		void mettreAJourStatut(std::string nouveauStatut);

		const std::string getAddress() const;
		const std::string getType() const;
		const int GetId() const;
		const float GetSurface() const;
		const std::string GetStatut() const;
};

class Maison : public BienImmobilier {
	private:
		int rooms;
		float garden_surface;
	public:
		Maison(int id, std::string address, float surface, std::string statut, int rooms, float garden_surface);

		void afficherDetails(std::string prefix = "") const override;
};


class Appartement : public BienImmobilier{
	private:
		int rooms;
	public:
		Appartement(int id, std::string address, float surface, std::string statut, int rooms);

		void afficherDetails(std::string prefix = "") const override;
};

class Terrain : public BienImmobilier{
	public:
		Terrain(int id, std::string address, float surface, std::string statut);

		void afficherDetails(std::string prefix = "") const override;
};

#endif
