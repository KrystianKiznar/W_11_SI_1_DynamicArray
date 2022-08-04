#include "Array.h"
#include <iostream>

Array::Array() {
	basedArray = new int[10]{};
	extArr = new int();
}

void Array::printArray() {

	for (int i = 0; i < counter; i++) {
		std::cout << basedArray[i]<<std::endl;
	}
	//for (const auto& value : extArr) {
	//	std::cout << value << ' ';
	//}
	//for (auto i : basedArray) {
	//	std::cout << *(basedArray + i) << std::endl;
	//}
}

void Array::set(int index, int value){
	basedArray[index] = value;
}


Array::~Array(){
	//delete[] basedArray; //powoduje blad!
	delete[] extArr;
}

void Array::pusch_back(int element){
	if (counter < size) {
		basedArray[counter] = element;
		counter++;
	}
	else {
		size = size * 2;
		extArr = new int[size];// tworze nowy array 2 razy wiekszy

		for (int i = 0; i < counter; i++) {//przepisuje wartosci starego arraya do nowego
			extArr[i] = basedArray[i];
		}

		basedArray = extArr;// ustawiam pointer glownego arraya na adres rozszerzonego 
		basedArray[counter] = element;//dodaje przekazany metodzie element

		counter++;
	}
}

int Array::get(int index){
	return basedArray[index];
}

void Array::clear() {
	for (int i = 0; i < size; i++) {
		basedArray[i] = NULL;
		counter = 0;
	}
}

