#include <vector>

template <class T>
void SortObject(std::vector<T>& vec){
	// implementation of an insert sort to sort low-medium sized vector in a 
	// somewhat efficient way
	T temp;
	int j;
	for(int i=1;i<vec.size();i++){
		j=i-1;
		temp=vec[i];
		
		while(j>=0 && vec[j]>temp){
			vec[j+1]=vec[j];
			j=j-1;
		}
		vec[j+1]=temp;
	}
} // useful to organise data


template<class T>
std::vector<T> GetWithPredicate(std::vector<T>& vec, bool (*p)(T)){
	// attention à bien passer la référence de la fonction prédicat en paramètre
	// et pas directement la fonction elle même
	std::vector<T> res;
	for(T elem:vec){
		if(p(elem))
			res.push_back(elem);
	}
	return res;
}


template<class T>
void SortObjectWithPredicate(std::vector<T>& vec, bool (*p)(T,T)){
	// donne plus d'options de tri à l'utilisateur si ce dernier 
	// ressent ce besoin, dans notre cas p(T1,T2)==True signifie que 'T1>T2"	
	// l'utilisateur devra prendre en compte les détails de cette implementation
	T temp;
	int j;
	for(int i=1;i<vec.size();i++){
		j=i-1;
		temp=vec[i];
		
		while(j>=0 && p(vec[j],temp)){
			vec[j+1]=vec[j];
			j=j-1;
		}
		vec[j+1]=temp;
	}
}
