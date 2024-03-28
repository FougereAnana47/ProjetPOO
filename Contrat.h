#ifndef CONTRAT_H_
#define CONTRAT_H_

#include <iostream>

class Contrat{
	private:
		int idContrat;
		std::string date; // "" si non signé ? 
		std::string typeContrat;
		std::string termesContrat;

		bool signe; // pour savoir si le contrat est signé ? 

	public:
		Contrat(int id, std::string d, std::string ty, std::string te);
		Contrat(); // on le garde ? 

		void afficherContrat();

		void signerContrat(); 
};





#endif
