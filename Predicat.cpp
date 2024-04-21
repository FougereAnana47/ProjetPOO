#include "Predicat.h"

#include "BienImmobilier.h"


bool IsAppartement(BienImmobilier* bien){
	return bien->GetStatut()=="Appartement";
}

bool IsMaison(BienImmobilier* bien){
	return bien->GetStatut()=="Maison";
}

bool IsTerrain(BienImmobilier* bien){
	return bien->GetStatut()=="Terrain";
}

bool SurfaceOf50(BienImmobilier* bien){
	//renvoie true si la surface du bien est 
	//d'au moins 50
	return bien->GetSurface()>=50.f;
}


bool SurfaceIsBigger(BienImmobilier* b1, BienImmobilier* b2){
	//renvoie true si la surface de b1 est plus grande
	//que la surface de b2
	return b1->GetSurface()>b2->GetSurface();
}

bool MontantIsBigger(Transaction t1, Transaction t2){
	return	t1.GetMontant()>t2.GetMontant(); 
}




// libre à l'utilisateur d'ajouter le prédicat qui conviendrait à ses désirs les
// plus fous
