//
// -> Am folosit random pentru a exemplifica modul de functionare a exercitiului.
//
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "NumberList.h"

int main()
{
	srand(time(0));

	NumberList N;
	N.Init();

	int save_rand = 0;
	for (int i = 0; i < 11; i++)
	{
		save_rand = rand();
		if (!N.Add(save_rand))
		{
			printf("!-> Ai depasit limita pentru valoarea %d.\n", save_rand);
			break;
		}
	}


	N.Sort();
	N.Print();

	return 0;
}