#ifndef PERSONNE_H_
#define PERSONNE_H_

#include <iostream>
#include <vector>
#include "BienImmobilier.h"

class Personne{
	protected:
		std::string nom;
		std::string addresse;
		std::string telephone;
	
	public:
		Personne(std::string nom, std::string adresse, std::string tel);
		Personne(); // constructeur de base => on le garde ? 

		virtual void afficherInfos();
		std::string GetNom();
};

class Client : public Personne {
	public:
		Client(std::string name, std::string address, std::string phone);

		void afficherInfos();
};


class Proprietaire : public Personne {
	private:
		std::vector<BienImmobilier*> biens;
	public:
		Proprietaire(std::string name, std::string address, std::string phone, std::vector<BienImmobilier*> biens);

		void afficherInfos();
};


class Locataire : public Personne {
	private:
		BienImmobilier* bien;
	public:
		Locataire(std::string name, std::string address, std::string phone, BienImmobilier* bien);

		void afficherInfos();
};




#endif
