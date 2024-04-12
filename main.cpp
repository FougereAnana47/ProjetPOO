#include <iostream>
#include <stdexcept>

#include "BienImmobilier.h"
#include "Personne.h"
#include "Contrat.h"
#include "Transaction.h"
#include "Agence.h"

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
}

void testExercice4(){
	cout << "Tests de l'exercice 4 : " << endl;
}

void testExercice5(){
	cout << "Tests de l'exercice 5 : " << endl;
}

void testExercice6(){
	cout << "Tests de l'exercice 6 : " << endl;
}



int main(int argc, char** argv){
	// if called without any param just launches the second part of the function
	// else, you can call any test with ./main num (call testExercice{num})

	if(argc>=3){
		cerr << "Usage: ./main [ num_exo ]";
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
