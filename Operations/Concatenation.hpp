#ifndef CONCATENATION_HPP
#define CONCATENATION_HPP

#include "Operation.hpp"

#include <string>
#include <iostream>

using namespace std;

class Concatenation : public Operation {
	private:
		Operation *O1;
		Operation *O2;
		
	public:
		Concatenation(Operation *O1, Operation *O2);
		void afficher();
};

#endif //CONCATENATION_HPP
