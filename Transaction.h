#ifndef TRANSACTION_H_
#define TRANSACTION_H_

#include <iostream>

class Transaction{
	private:
		int idTransaction;
		float montant;
		std::string dateTransaction;

	public:
		Transaction(int id, float m, std::string dT);
		Transaction(); // on le garde ?

		void effectuerTransaction();
		int GetId();
		float GetMontant();
};








#endif
