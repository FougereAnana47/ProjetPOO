#include "Template.h"


#include "Personne.h"
#include "BienImmobilier.h"
#include "Transaction.h"
#include "Contrat.h"
#include <filesystem>
#include <vector>



// utilisons la spécialisation de template : 

template<>// spécialisation explicite
void SortObject(std::vector<Personne*>& vec){
	Personne* temp;
	int j;
	for(int i=1;i<vec.size();i++){
		j=i-1;
		temp=vec[i];
		
		while(j>=0 && vec[j]->GetNom()>temp->GetNom()){
			vec[j+1]=vec[j];
			j=j-1;
		}
		vec[j+1]=temp;
	}
}

template<>// spécialisation explicite
void SortObject(std::vector<BienImmobilier*>& vec){
	BienImmobilier* temp;
	int j;
	for(int i=1;i<vec.size();i++){
		j=i-1;
		temp=vec[i];
		
		while(j>=0 && vec[j]->GetId()>temp->GetId()){
			vec[j+1]=vec[j];
			j=j-1;
		}
		vec[j+1]=temp;
	}
}




template<>// spécialisation explicite
void SortObject(std::vector<Contrat>& vec){
	Contrat temp;
	int j;
	for(int i=1;i<vec.size();i++){
		j=i-1;
		temp=vec[i];
		
		while(j>=0 && vec[j].GetId()>temp.GetId()){
			vec[j+1]=vec[j];
			j=j-1;
		}
		vec[j+1]=temp;
	}
}

template<>// spécialisation explicite
void SortObject(std::vector<Transaction*>& vec){
	Transaction* temp;
	int j;
	for(int i=1;i<vec.size();i++){
		j=i-1;
		temp=vec[i];
		
		while(j>=0 && vec[j]->GetId()>temp->GetId()){
			vec[j+1]=vec[j];
			j=j-1;
		}
		vec[j+1]=temp;
	}
}

//--------------------
//--------------------

/*
template<>// pratique pour qu'un client choisisse des BienImmobilier selon
		  // certains critère
		  // Attention, c'est à l'utilisateur de créer son prédicat pour choisir
		  // selon ses envies
std::vector<BienImmobilier*> GetWithPredicate(std::vector<BienImmobilier*> vec,
		bool (*p)(BienImmobilier*)){
	std::vector<BienImmobilier*> res;
	for(BienImmobilier* elem:vec){
		if(p(elem))
			res.push_back(elem);
	}
	return res;
}

*/
