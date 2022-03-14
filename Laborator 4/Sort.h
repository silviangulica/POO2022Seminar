#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

class Sort
{
private:
	int* Vector;
	int Length;
	bool Ascendent = false;

	// Used to allocate memory
	void AllocateMem();

	// Use to swap elements
	void Swap(int* El1, int* El2);

	// Use for partition 
	int Partition(int Start, int End);

	// Ascend QuickSort
	void TemporarQuick(int Start, int End);

public:
	Sort(int NrElements, int MaximumValue, int MinimumValue);

	// Use to sort the Vector by Insert Algorithm.
	void InsertSort(bool ascendent = false);

	// Use to sort the Vector by Quick Algorithm.
	void QuickSort(bool ascendent = false);
	
	// Use to sort the Vector by Bubble Sort.
	void BubbleSort(bool ascendent = false);
	
	// Use to Print the Vector.
	void Print() const;
	
	// Get the number of elemnets.
	int GetElementsCount() const;
	
	// Get the element from a specific point(index).
	int GetElementFromIndex(int index) const;

};

