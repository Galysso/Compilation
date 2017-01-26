#ifndef ATOME_HPP
#define ATOME_HPP

#include "Operation.hpp"

#include <string>

using namespace std;

class Atome : public Operation {
	private:
	public:
		Atome(int n);
		string toString();
};

#endif
