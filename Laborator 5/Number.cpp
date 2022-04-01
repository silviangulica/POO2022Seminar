#include "Number.h"

// The constructors
Number::Number(char* value, int base)
{
   // Assume that the number is correct
   // I will transform the number in decimal form
   //
   // 1) I will use the string value first and then I will modify the string value
   // 	to correspond to the some criterias:
   // 	- If the number is correct it will remain the same 
   // 	- If the number have a base lower than the number, the number will be transformed
   // 		to the current base
   // 	- If the Base is lower than 1 or higher than 16 it will be transformed in base 10

	this->digitNumber = strlen(value);
	this->numberBase  = base;
	this->numberValuein10 = Convert10(value);
	
	// Check if the number have a lower base than it
	if (!this->CheckBasetoNumber(value, base)
	{
		// Convert the number to the base

	}	
}



// The Private Funcs
int Number::Convert10(char* number)
{
	int finalNumber = 0;
	if (this->numberBase == 10)
	{
		for (int i = 0; i < digitNumber; i++)
		{
			finalNumber = finalNumber * 10 + ConvertChar(number[i]);
		}
	}else 
	{
		// Transform from anybase to base 10
	}
	
	return finalNumber;
}

Number::~Number()
{
	printf("Am apelat deconstructor \n");
}
int Number::ConvertChar(char Char)
{
    switch (Char)
    {
        case '0': return 0;
        case '1': return 1;
        case '2': return 2;
        case '3': return 3;
        case '4': return 4;
        case '5': return 5;
        case '6': return 6;
        case '7': return 7;
        case '8': return 8;
        case '9': return 9;
        case 'A': return 10;
        case 'B': return 11;
        case 'C': return 12;
        case 'D': return 13;
        case 'E': return 14;
        case 'F': return 15;
        default : return -1;
    }
}



bool Number::CheckBasetoNumber(const char* value, int base)
{
    int lengh = strlen(value);
    for (int i = 0; i < lengh; i++)
    {
        if (ConvertChar(value[i]) >= base)
        {
            return false;
        }
    }
    return true;
}

// The Public Funcs
void Number::SwitchBase(int newBase)
{
    
}

void Number::Print() const
{
    printf("%d\n", this->numberValue);
}

int Number::GetDigitsCount() const
{
    return this->digitNumber;
}

int Number::GetBase() const
{
    return this->numberBase;
}


