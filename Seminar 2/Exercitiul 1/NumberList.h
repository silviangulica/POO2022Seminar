#pragma once
#include <stdlib.h>
#include <stdio.h>

class NumberList
{
private:
	int number[10];
	int count;
public:
	void Init();
	bool Add(int x);
	void Sort();
	void Print();
};

