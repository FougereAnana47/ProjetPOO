#ifndef AGENCE_H_
#define AGENCE_H_


#include "BienImmobilier.h"
#include "Personne.h"
#include "Contrat.h"
#include "Transaction.h"


#include <iostream>
#include <vector>

class Agence{
	private: // tous les args privés ont été rajoutés
		std::string nomAgence;
		std::vector<BienImmobilier> biens;
		std::vector<Client> clients;
		std::vector<Transaction> transactions;
	public:
		Agence(std::string n);
		void ajouterBien();
		void ajouterClient();
		Contrat creerContrat();
		void enregistrerTransaction();


};



#endif
