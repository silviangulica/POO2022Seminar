#include "NumberList.h"

bool NumberList::Add(int x)
{
	if (this->count >= 10) return false;

	this->number[count] = x;
	this->count++;
	return true;
}

void NumberList::Init()
{
	this->count = 0;
}

void NumberList::Sort()
{
	int temporar = 0, done = 0;
	bool check = true;
	
	while (check)
	{
		check = false;
		for (int i = 0; i < count - done; i++)
		{
			if (number[i] > number[i + 1] && i+1 < count)
			{
				temporar = number[i];
				number[i] = number[i + 1];
				number[i + 1] = temporar;

				check = true;
			}
		}

		if (!check) return;
		done++;
	}
}

void NumberList::Print()
{
	for (int i = 0; i < count; i++)
	{
		printf("%d ", this->number[i]);
	}
}
