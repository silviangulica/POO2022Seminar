#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

/*
	-> Imi cer scuze, am avut o problema la fisierele text in Visual Studio, nu-mi citea fisierul.
    -> Am folosit fstream in loc de FILE pentru ca nu cunosc care e cauza problemei inca.

	-> Sursa pentru Problema 1
*/

int convertStringNumber(string sNumber)
{
	int lung = sNumber.length();
	int fNumber = 0, tNumber = 0;
	for (int i = 0; i < lung; i++)
	{
		tNumber = (int)sNumber[i] - 48;
		fNumber = fNumber * 10 + tNumber;
	}
	return fNumber;
}

int main()
{
	
	ifstream fp("in.txt");
	int Suma = 0, tVal = 0;
	while (!fp.eof())
	{
		string Number;
		fp >> Number;
		tVal = convertStringNumber(Number);
		Suma += tVal;
	}
	printf("%d\n", Suma);
    fp.close();
	return 0;
}
