#include "Sort.h"
// Private Funcs
void Sort::AllocateMem()
{
	this->Vector = (int*)(malloc(Length * sizeof(int)));
}
void Sort::Swap(int* El1, int* El2)
{
	int temp = *El1;
	*El1 = *El2;
	*El2 = temp;
}
int Sort::Partition(int Start, int End)
{
	int Pivot = this->Vector[End];
	int Index = Start;
	for (int i = Start; i <= End - 1; i++)
	{
		if (Vector[i] <= Pivot && this->Ascendent)
		{
			Swap(&Vector[i], &Vector[Index]);
			Index++;
		}
		else if (Vector[i] >= Pivot && !this->Ascendent)
		{
			Swap(&Vector[i], &Vector[Index]);
			Index++;
		}
	}
	Swap(&Vector[End], &Vector[Index]);
	return Index;
}
void Sort::TemporarQuick(int Start, int End)
{
	if (Start < End)
	{
		int pivotIndex = Partition(Start, End);
		TemporarQuick(Start, pivotIndex - 1);
		TemporarQuick(pivotIndex + 1, End);
	}
}

// Constructor for creating a vector of k elem random between min .. max
Sort::Sort(int NrElements, int MaximumValue, int MinimumValue)
{
	this->Length = NrElements;
	AllocateMem();

	srand((unsigned)time(nullptr));
	for (int i = 0; i < Length; i++)
	{
		Vector[i] = MinimumValue - (rand() % (MaximumValue - MinimumValue + 1));
	}
}




// Sorting funcs
void Sort::InsertSort(bool ascendent)
{
	this->Ascendent = ascendent;
	int j = 0;
	int key = 0;
	for (int i = 1; i < this->Length; i++)
	{
		key = Vector[i];
		j = i - 1;
		if(ascendent)
		{
			while (j >= 0 && Vector[j] > key)
			{
				Vector[j + 1] = Vector[j];
				j--;
			}
		}
		else 
		{
			while (j >= 0 && Vector[j] < key)
			{
				Vector[j + 1] = Vector[j];
				j--;
			}
		}
		Vector[j + 1] = key;
	}
}
void Sort::QuickSort(bool ascendent)
{
	this->Ascendent = ascendent;
	TemporarQuick(0, this->Length - 1);
}
void Sort::BubbleSort(bool ascendent)
{
	bool wasIf = true;
	int wLength = 0;
	while (wasIf)
	{
		wasIf = false;
		for(int i = 0; i < this->Length - wLength - 1; i++)
			if (Vector[i] > Vector[i + 1] && ascendent)
			{
				Swap(&Vector[i], &Vector[i + 1]);
				wasIf = true;
			}else if (Vector[i] < Vector[i + 1] && !ascendent)
			{
				Swap(&Vector[i], &Vector[i + 1]);
				wasIf = true;
			}
		wLength++;
	}
}

// Print
void Sort::Print() const
{
	printf("%d", Vector[0]);
	for (int i = 1; i < this->Length; i++)
	{
		printf(", %d", Vector[i]);
	}
	printf("\n");
}

// Get Elements
int Sort::GetElementsCount() const
{
	return this->Length;
}
int Sort::GetElementFromIndex(int index) const
{
	if (index < 0 || index >= this->Length)
	{
		printf("[Err]: Invalid index value at GetElementFromIndex.");
		return 0;
	}
	return this->Vector[index];
}