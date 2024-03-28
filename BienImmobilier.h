#ifndef BIEN_IMMOBILIER_H_
#define BIEN_IMMOBILIER_H_

#include <iostream>

class BienImmobilier{
	private:
		int id;
		std::string addresse;
		float surface;
		std::string type;
		std::string statut;

		
	public:
		BienImmobilier(int i, std::string add, float sur, std::string t, 
				std::string sta);
		BienImmobilier(); // définis un bien immobilier avec des valeurs 
						  // "par défauts" => est ce qu'on le garde ? 

		void afficherDetails();

		void mettreAJourStatut();



};

class Maison : public BienImmobilier{


};


class Appartement : public BienImmobilier{


};

class Terrain : public BienImmobilier{


};

#endif
