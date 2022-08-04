#include <iostream>
#include "Array.h"

int main() {

	Array ar;
	ar.pusch_back(1);
	ar.pusch_back(2);
	ar.pusch_back(3);
	ar.pusch_back(4);
	ar.pusch_back(5);
	ar.pusch_back(6);
	ar.pusch_back(7);
	ar.pusch_back(8);
	ar.pusch_back(9);
	ar.pusch_back(10);

	ar.pusch_back(11);
	ar.pusch_back(12);
	ar.pusch_back(13);
	ar.pusch_back(14);
	ar.pusch_back(15);
	ar.pusch_back(16);
	ar.pusch_back(17);
	ar.pusch_back(18);
	ar.pusch_back(19);
	ar.pusch_back(20);

	ar.pusch_back(22);

	ar.pusch_back(226);
	ar.pusch_back(225);
	ar.pusch_back(224);
	ar.pusch_back(222);

	int myGet = ar.get(14);
	std::cout << "is 'get' working?" << myGet<<std::endl;
	ar.set(20, 100);

	ar.printArray();
	std::cout << "------------------------------\n";
	ar.clear();
	ar.pusch_back(9);
	ar.printArray();
	std::cout << "This is the end";
	return 0;
}