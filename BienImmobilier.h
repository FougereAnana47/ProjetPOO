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

		virtual void afficherDetails(std::string prefix = "") const;
		void mettreAJourStatut(std::string nouveauStatut);

		std::string getAddress() const;
		std::string getType() const;
		int GetId() const;
		float GetSurface() const;
		std::string GetStatut() const;
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
