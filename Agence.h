#ifndef AGENCE_H_
#define AGENCE_H_


#include "BienImmobilier.h"
#include "Personne.h"
#include "Contrat.h"
#include "Transaction.h"
#include "exception.h"


#include <iostream>
#include <vector>

class Agence{
	private: // tous les args privés ont été rajoutés
		std::string nomAgence;
		std::vector<BienImmobilier> biens;
		std::vector<Personne> personnes;
		std::vector<Transaction> transactions;
	public:
		Agence(std::string n);
		void ajouterBien(BienImmobilier bien);
		void ajouterPersonne(Personne personne);
		Contrat creerContrat(Client client, Personne* personne, BienImmobilier bien, int id, std::string d, std::string ty, std::string te);
		void enregistrerTransaction(Transaction transaction);
		void afficherInfos() const;


};



#endif
