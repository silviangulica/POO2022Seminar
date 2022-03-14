#include <stdio.h>
#include <stdlib.h>
#include "Sort.h"


int main()
{
	Sort t(10, 1, 9);
	t.Print();
	printf("The vector was BubbleSorted: \n");
	t.BubbleSort(true);
	t.Print();

	printf("The vector was inverted BubbleSorted: \n");
	t.BubbleSort();
	t.Print();

	Sort q(10, 1, 9);
	q.Print();
	printf("The vector q was Quicksorted\n");
	q.QuickSort(true);
	q.Print();
	return 0;
}