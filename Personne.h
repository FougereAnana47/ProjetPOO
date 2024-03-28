#ifndef PERSONNE_H_
#define PERSONNE_H_

#include <iostream>

class Personne{
	private:
		std::string nom;
		std::string addresse;
		std::string telephone;
	
	public:
		Personne(std::string n, std::string a, std::string t);
		Personne(); // constructeur de base => on le garde ? 

		void afficherInfos();
};



class Client : public Personne{
	

};


class Proprietaire : public Personne{


};


class Locataire : public Personne{


};




#endif
