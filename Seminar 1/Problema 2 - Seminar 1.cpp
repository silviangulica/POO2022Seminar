#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

/*
	-> Sursa pentru Problema 2
*/

 

void SortareCuvinteLungime(string Cuvinte[100], int Lungime)
{
	bool exista = true;
	int tLungime = 0;
	while (exista)
	{
		exista = false;
		string tCuvant;
		for (int i = 1; i < Lungime - tLungime; i++)
		{
			if (Cuvinte[i-1].length() > Cuvinte[i].length())
			{
				tCuvant = Cuvinte[i];
				Cuvinte[i] = Cuvinte[i - 1];
				Cuvinte[i - 1] = tCuvant;
				exista = true;
			}
		}
		tLungime++;
	}

	// -> Sortare Alfabetica
	for (int i = 0; i < Lungime; i++)
		for (int j = i+1; j < Lungime; j++)
		{
			string tCuvant;
			if (Cuvinte[i].length() == Cuvinte[j].length())
			{
				for (int z = 0; z > Cuvinte[i].length(); z++)
				{
					if (Cuvinte[i][z] < Cuvinte[j][z])
					{
						tCuvant = Cuvinte[i];
						Cuvinte[i] = Cuvinte[j];
						Cuvinte[j] = tCuvant;
						break;
					}
				}
				break;
			}
		}

}



int main()
{
	ifstream fp;
	fp.open("in.txt");
	
	string Cuvinte[100];
	int N = 0;

	while (!fp.eof())
	{
		fp >> Cuvinte[N];
		N++;
	}N++;

	SortareCuvinteLungime(Cuvinte, N);
	
	for (int i = N-1; i >= 1; i--)
	{
		char Word[100];
		strcpy_s(Word, Cuvinte[i].c_str());
		printf("%s\n", Word);
	}

	fp.close();
	return 0;
}
