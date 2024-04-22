#ifndef CONTRAT_H_
#define CONTRAT_H_

#include <iostream>
#include <vector>

#include "Personne.h"
#include "Exception.h"

class Client;
class BienImmobilier;
class Contrat{
	private:
		int idContrat;
		std::string date; // "" si non signé ? 
		std::string typeContrat;
		std::string termesContrat;

		bool signe; // pour savoir si le contrat est signé ? 

		std::vector<Client> clients;
		std::vector<BienImmobilier> biens;

	public:
		Contrat(int id, std::string d, std::string ty, std::string te);
		Contrat();

		void afficherContrat() const;
		void signerContrat(); 
		int GetId() const;
		void ajouterClient(Client client); 
		void ajouterBienImmobilier(BienImmobilier bien); 
};





#endif
