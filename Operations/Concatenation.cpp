#include "Concatenation.hpp"

#include <iostream>

using namespace std;

Concatenation::Concatenation(Operation *O1, Operation *O2) {
	this->O1 = O1;
	this->O2 = O2;
}

void Concatenation::afficher() {
	cout << "Concat" << endl;
}
