#include <stdlib.h>
#include <stdio.h>
#include "Math.h"

int main()
{
	Math test;

	printf("=== === === Test Add === === ===\n");
	printf("Test 1 (int+int): %d\n", Math::Add(1, 2));
	printf("Test 2 (int+int+int): %d\n", Math::Add(1, 2, 3));
	printf("Test 3 (double+double): %d\n", Math::Add(1.5, 2.5));
	printf("Test 4 (double+double+double): %d\n", Math::Add(1.4, 2.1, 3.0));
	printf("Test 5 (count, int+int+int ... ): %d\n", Math::Add(5, 2, 3, 4, 5, 6));

	printf("\n=== === === Test Mull === === ===\n");
	printf("Test 1 (int*int): %d\n", Math::Mul(1, 2));
	printf("Test 2 (int*int*int): %d\n", Math::Mul(1, 2, 3));
	printf("Test 3 (double*double): %d\n", Math::Mul(1.4, 2.1));
	printf("Test 4 (double*double*double): %d\n", Math::Mul(1.4, 2.1, 3.0));

	printf("\n=== === === Test Char === === ===\n");
	printf("Test (char* + char*): %s\n", Math::Add("Hello ", "World"));
	return 0;
}