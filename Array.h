#pragma once
class Array
{
private:
	int size = 10;
	int counter = 0;
	int* basedArray;
	int* extArr;

public:
	Array();
	~Array();
	void pusch_back(int element);
	void printArray();
	int get(int index);
	void set(int index, int value);
	void clear();
};

