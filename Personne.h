#ifndef PERSONNE_H_
#define PERSONNE_H_

#include <iostream>
#include <vector>
#include "BienImmobilier.h"
#include "Contrat.h"

class Contrat;
class BienImmobilier;
class Personne{
	protected:
		std::string nom;
		std::string addresse;
		std::string telephone;
	
	public:
		Personne(std::string nom, std::string adresse, std::string tel);

		virtual void afficherInfos() const;
		std::string GetNom() const;
};

class Client : public Personne {
	private:
		std::vector<Contrat> contrats;
	public:
		Client(std::string name, std::string address, std::string phone);

		void afficherInfos() const override;
		void ajouterContrat(Contrat contrat);
};


class Proprietaire : public Personne {
	private:
		std::vector<BienImmobilier*> biens;
	public:
		Proprietaire(std::string name, std::string address, std::string phone, std::vector<BienImmobilier*> biens);

		void afficherInfos() const override;
};


class Locataire : public Personne {
	private:
		BienImmobilier* bien;
	public:
		Locataire(std::string name, std::string address, std::string phone, BienImmobilier* bien);

		void afficherInfos() const override;
};


#endif