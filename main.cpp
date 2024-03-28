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
void separateur(){ std::cout<<"--------------------------------\n";}

void testExercice1(){
	cout << "Tests de l'exercice 1 : " << endl;

	separateur();

	Personne p1("Paul", "105 rue Blaise Pascal", "+33 7 52 53 54 55");
	p1.afficherInfos();
	
	separateur();
	
	Contrat c1(121,"29/02/2024","location meublée","avoir de l'argent");
	c1.signerContrat();
	c1.afficherContrat();

	separateur();

	BienImmobilier b1(241,"103 rue Jean Paul Sartre", 57.2, "Maison", 
			"à vendre");
	b1.mettreAJourStatut("vendu");
	b1.afficherDetails();
	separateur();
}
void testExercice2(){
	cout << "Tests de l'exercice 1 : " << endl;
}
void testExercice3(){
	cout << "Tests de l'exercice 1 : " << endl;
}
void testExercice4(){
	cout << "Tests de l'exercice 1 : " << endl;
}
void testExercice5(){
	cout << "Tests de l'exercice 1 : " << endl;
}
void testExercice6(){
	cout << "Tests de l'exercice 1 : " << endl;
}



int main(int argc, char** argv){
	// if called without any param just launches the second part of the function
	// else, you can call any test with ./main num (call testExercice{num})
	if(argc>=3){
		cerr<< "Merci d'utiliser soit 1 paramètre supplémentaire soit aucun";
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
