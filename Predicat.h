// le but de ce fichier est de stocker quelques fonctions prédicats afin de
// faciliter les tests de la fonction main et de tester certaines fonctions 
// avec template
#include "BienImmobilier.h"
#include "Transaction.h"

bool IsAppartement(BienImmobilier* bien);
bool IsMaison(BienImmobilier* bien);
bool IsTerrain(BienImmobilier* bien);
bool SurfaceOf50(BienImmobilier* bien);
bool SurfaceIsBigger(BienImmobilier* b1, BienImmobilier* b2);
bool MontantIsBigger(Transaction* t1, Transaction* t2);
