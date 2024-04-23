#include <iostream>
#include <stdexcept>

#include "BienImmobilier.h"
#include "Personne.h"
#include "Contrat.h"
#include "Transaction.h"
#include "Agence.h"

#include "Predicat.h"

using namespace std;

/* Fichier permettant de faire différent test
 *
 * Merci d'utiliser une fonction par exercice afin de tester ces derniers 
 * individuellement et ne pas simplement accumuler les tests dans main 
 *
 *
*/
void sep() { 
	cout << "--------------------------------" << endl;
}

void testExercice1(){
	cout << "Tests de l'exercice 1 : " << endl;

	sep();

	Personne p1("Paul", "105 rue Blaise Pascal", "+33 7 52 53 54 55");
	p1.afficherInfos();
	
	sep();
	
	Contrat c1(121,"29/02/2024","location meublée","avoir de l'argent");
	c1.signerContrat();
	c1.afficherContrat();

	sep();

	BienImmobilier b1(241,"103 rue Jean Paul Sartre", 57.2, "Maison", "à vendre");
	b1.mettreAJourStatut("vendu");
	b1.afficherDetails();
	sep();
}

void testExercice2(){
	cout << "Tests de l'exercice 2 : " << endl;
	sep();

	/* BiensImmobiliers */
	Maison m1(666, "55 rue du Faubourg-Saint-Honoré, 75008 Paris, France", 11179, "à vendre", 365, 150000);
	m1.afficherDetails();
	sep();

	Appartement app1(42, "20 rue de la Bastille, 75000 Paris, France", 12, "à louer", 1);
	app1.afficherDetails();
	sep();

	Appartement app2(61, "Quelque part, 72000 Versailles, France", 35, "à vendre", 2);
	app2.afficherDetails();
	sep();

	/* Personnes */
	Locataire p1("Patrick Balkany", "1 Place de la République, 92300 Levallois-Perret, France", "+33 1 49 68 30 00", &app1);
	p1.afficherInfos();
	sep();

	Proprietaire p2("Emmanuel Macron", "52 rue Barnard Tapie", "+33 1 11 11 11 00", std::vector<BienImmobilier*>({ &m1, &app2 }));
	p2.afficherInfos();
	sep();
}

void testExercice3(){
	cout << "Tests de l'exercice 3 : " << endl;
	sep();

	BienImmobilier* biens[5] = {
		new Maison(666, "55 rue du Faubourg-Saint-Honoré, 75008 Paris, France", 11179, "à vendre", 365, 150000),
		new Maison(667, "56 rue du Faubourg-Saint-Honoré, 75008 Paris, France", 11180, "à louer", 366, 150001),
		new Maison(668, "57 rue du Faubourg-Saint-Honoré, 75008 Paris, France", 11180, "à vendre", 367, 150002),

		new Appartement(42, "20 rue de la Bastille, 75000 Paris, France", 12, "à louer", 1),
		new Appartement(61, "Quelque part, 72000 Versailles, France", 35, "à vendre", 2)
	};

	for (BienImmobilier* bien : biens) {
		bien->afficherDetails();
		sep();
	}
}

void testExercice4() {
	cout << "Tests de l'exercice 4 : " << endl;
	sep();

	Contrat c1(-5,"06/11/1990","vente non meublé","gagner peu d'argent");

	sep();

	Contrat c2(756,"12/07/2026","vente meublé","se débarraser du bien");
	c2.signerContrat();
	c2.afficherContrat();

	sep();

	c2.signerContrat();
	c2.afficherContrat();

	sep();

	BienImmobilier b1(-75,"80 Boulevard de l'Élysée", 15.7, "Palais", "à vendre");
	BienImmobilier b2(90,"405 rue de la Bastille", -75.4, "Manoir", "à louer");
	sep();

	Maison m1(123, "62 avenue de St-Exupéry, 48009 Paris, Canada", 7514, "à vendre", -52, 75600.1);
	Maison m2(456, "63 avenue de St-Exupéry, 47006 Paris, Belgique", 9875, "à vendre", 400, -90.2);
	sep();

	Appartement app1(56, "89 rue de St-Bonnet de Mure, 12047 Lyon, Suisse", 47, "à louer", -1);
	sep();

	Agence ag1("AgencePOO");
	ag1.creerContrat(Client("Pierre-Antoine","9 rue St-Jacques, 95600 Metropolis, Chine","0423"),
	new Client("Joe Biden","87 place de la Maison Blanche, 95600 Washington DC, Corée du Nord","0423"),
	BienImmobilier(748,"975 Boulevard du Moulin d'or", 47.1, "Palais", "à vendre"), 47, "01/12/0210",
	"vieille vente d'une antiquité","don payant pour un collectionneur");
	sep();

	Transaction t1(-186, 45.3,"03/07/0498");
	Transaction t2(186, -45.3,"07/03/8940");
	sep();
}

void testExercice5() {
	cout << "Tests de l'exercice 6 : " << endl;
	sep();

	std::vector<BienImmobilier*> biens = {
		new Maison(666, "55 rue du Faubourg-Saint-Honoré, 75008 Paris, France", 11179, "à vendre", 365, 150000),
		new Appartement(42, "20 rue de la Bastille, 75000 Paris, France", 12, "à louer", 1),
		new Terrain(64, "Quelque part, 72000 Versailles, France", 78, "à vendre")
	};

	std::vector<Transaction*> transacs = {
		new Transaction(1, 568.0f, "01/01/1970"),
		new Transaction(2, 1568.0f, "12/34/5678"),
	};

	
}

void testExercice6(){
	cout << "Tests de l'exercice 6 : " << endl;

	sep();

	Agence agence("Agence Douteuse");
	agence.afficherInfos();
	sep();

	agence.ajouterBien(BienImmobilier(457,"4 Rue de Montreal", 12.7, "Mairie", "à louer"));
	agence.afficherInfos();

	sep();

	agence.ajouterPersonne(Client("Poppins","île de Bordeaux, 41203 Toulouse, Japon","15874"));
	agence.afficherInfos();

	sep();

	Contrat contrat = agence.creerContrat(
		Client("Donald Trump","0 bis avenue du Retour, 74FD14 Persepolis, Algerie","7489"),
		new Locataire("Eric Zemmour","89 Impasse de la Remontée mécanique, AEDS65 Toronto, Australie","4", new Maison(412, "Rue de l'Infini, APM658 Londres, Brésil", 7489, "à louer rapidement", 4572, 42733.9)),
		Maison(412, "Rue de l'Infini, APM658 Londres, Brésil", 7489, "à louer rapidement", 4572, 42733.9),
		742, "12/07/2024", "location d'une maison hanté","récupérer des sous");
	contrat.afficherContrat();

	sep();
	
	agence.enregistrerTransaction(Transaction(1237, 74512.3,"07/11/-54786"));
	agence.afficherInfos();

	sep();
}



int main(int argc, char** argv){
	// if called without any param just launches the second part of the function
	// else, you can call any test with ./main num (call testExercice{num})

	if(argc>=3){
		cerr << "Usage: ./main < num_exo >";
		throw invalid_argument("");
	}
	else if(argc==2){ // call a specific exercise 
		// mainly use for testing/debugging, please use a VALID input	
		int choice = stoi(argv[1]);
		switch (choice) {
			case 1:
				testExercice1();
				break;
			case 2:
				testExercice2();
				break;
			case 3:
				testExercice3();
				break;
			case 4:
				testExercice4();
				break;
			case 5:
				testExercice5();
				break;
			case 6:
				testExercice6();
				break;
			default:
				cerr<< "Merci de rentrer une valeur valide ";
				throw invalid_argument("");
				break;	
		}

	}
	else{
		// do stuff here




	}
	return 0;
}
