#include "Algorithms.h"
#include <random>
using namespace std;
void Algorithms::BinarySearchFor(const int& nn, const int& upperLimit_in)const
{
	int operationCounter = 0;
	int lowEdge = 0;
	int hiEdge = upperLimit_in;
	int mid = upperLimit_in / 2;
	for (lowEdge; lowEdge < hiEdge;) {
		operationCounter += 1;
		if (nn>mid) {
			lowEdge = mid;
			mid += (hiEdge - mid) / 2;
		}
		else if (nn<mid) {
			hiEdge = mid;
			mid -= (mid - lowEdge) / 2;
		}
		else if (mid == nn) {
			cout << mid << " = " << nn << endl;
			cout << "Found in " << operationCounter << " operations" << endl;
			break;
		}
		cout << "Operation Num = " << operationCounter << endl;
	}

}

void Algorithms::LinearSearchFor(const int& nn, const int& upperLimit_in)const
{
	for (int i = 0; i < upperLimit_in; i++) {
		if (i == nn) {
			cout << "Found in " << i << " operations" << endl;
			break;
		}
		cout << "Operation Num = " << i << endl;
	}
}

int Algorithms::getRndNumberFromTo(const int& lowerLimit, const int& upperLimit)const
{
	random_device rd;
	mt19937 rng(rd());
	uniform_int_distribution<int> intDist(lowerLimit, upperLimit);
	return intDist(rng);
}