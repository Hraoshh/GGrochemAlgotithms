#include "Algorithms.h"//includes:iostream, random
int main() {
	//-----Variables-----
	Algorithms a;
	static constexpr int upperLimit = 2000000000;
	const constexpr int lowerLimit = 0;
	int desiredNumber = a.getRndNumberFromTo(lowerLimit, upperLimit);
	std::cout << "test" << std::endl;

	a.BinarySearchFor(desiredNumber, upperLimit);
	//a.linearSearchFor(desiredNumber, upperLimit);

}



