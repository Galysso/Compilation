#ifndef OPERATION_HPP
#define OPERATION_HPP

#include <string>

using namespace std;

class Operation {
	private:
	public:
		Operation();
		virtual string toString() = 0;
};

#endif //OPERATION_HPP
