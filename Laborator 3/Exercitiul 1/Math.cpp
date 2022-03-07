#include "Math.h"

// -> The Integer Add
int Math::Add(int Nr1, int Nr2)
{
	return Nr1 + Nr2;
}
int Math::Add(int Nr1, int Nr2, int Nr3)
{
	return Nr1 + Nr2 + Nr3;
}

// -> The Double Add
int Math::Add(double Nr1, double Nr2)
{
	return int(Nr1 + Nr2);
}
int Math::Add(double Nr1, double Nr2, double Nr3)
{
	return int(Nr1 + Nr2 + Nr3);
}

// -> The Integer Mull
int Math::Mul(int Nr1, int Nr2)
{
	return Nr1 * Nr2;
}
int Math::Mul(int Nr1, int Nr2, int Nr3)
{
	return Nr1 * Nr2 * Nr3;
}

// -> The Double Mul
int Math::Mul(double Nr1, double Nr2)
{
	return int(Nr1 * Nr2);
}
int Math::Mul(double Nr1, double Nr2, double Nr3)
{
	return int(Nr1 * Nr2 * Nr3);
}

// -> The VA_START Function
int Math::Add(int count, ...)
{
	int suma = 0; va_list Args;
	va_start(Args, count);
	for (int i = 1; i <= count; i++)
	{
		suma += va_arg(Args, int);
	}
	va_end(Args);
	return suma;
}


//
// -> The Add Char Function
// -> 2 Warnings, C6387: 'final_string' could be '0';
//
char* Math::Add(const char* String1, const char* String2)
{
	if (String1 == nullptr) return nullptr;
	if (String2 == nullptr) return nullptr;

	char* final_string; int final_length = 0;
	final_length = strlen(String1) + strlen(String2) + 1;

	final_string = (char*)malloc(final_length * sizeof(char));

	strcpy_s(final_string, final_length, String1);
	strcat_s(final_string, final_length, String2);

	return final_string;
}
