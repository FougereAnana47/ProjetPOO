#include "Agence.h"

#include <iostream>
Agence::Agence(std::string n): nomAgence(n){}

void Agence::ajouterBien(BienImmobilier bien){
    this->biens.push_back(bien);
}
void Agence::ajouterPersonne(Personne personne){
    this->personnes.push_back(personne);
}
Contrat Agence::creerContrat(Client client, Personne* personne, BienImmobilier bien, int id, std::string d, std::string ty, std::string te){
    Contrat contrat(id, d, ty, te);
    Proprietaire* p = dynamic_cast<Proprietaire*>(personne);
    Locataire* l = dynamic_cast<Locataire*>(personne);
    try {
        if(p == NULL && l == NULL) { 
            throw EX_PersonneNonValide();
        }
        contrat.ajouterClient(client);
        contrat.ajouterBienImmobilier(bien);
        client.ajouterContrat(contrat);
        bien.ajouterContrat(contrat);
    }
    catch(EX_PersonneNonValide e) {
        std::cerr << "Exception lors de la création d'un contrat : La personne n'est ni un propriétaire ni un locataire." << std::endl;
    }
    return contrat;
}
void Agence::enregistrerTransaction(Transaction transaction){
    this->transactions.push_back(transaction);
}

void Agence::afficherInfos() const {
	std::cout<<"Voici les détails de l'agence : "<<std::endl;
	std::cout<<"Son nom : "<< nomAgence << std::endl;
	
    std::cout << "Biens de l'agence : " << std::endl;

	for (BienImmobilier bien : biens) {
		std::cout << "| Id : " << bien.GetId() << std::endl;
	}

	std::cout << "Personnes de l'agence : " << std::endl;

	for (Personne personne : personnes) {
		std::cout << "| Nom : " << personne.GetNom() << std::endl;
	}

    std::cout << "Transactions de l'agence : " << std::endl;

	for (Transaction transaction : transactions) {
		std::cout << "| Id : " << transaction.GetId() << " Montant : " << transaction.GetMontant() << std::endl;
	}
}