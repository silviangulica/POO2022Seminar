#include "Number.h"

// The constructors
Number::Number(const char* value, int base)
{
    if ((base < 2) || (base > 16)) 
    {
        printf("[Err]: Invalid base, for number %s \n", value);
        return;
    }
    // Check if the number corespond to the base
    this->CheckBasetoNumber(value, base);

    int lengh = strlen(value);
    this->Value = new char[lengh];
    strcpy(this->Value, value);
    this->numberBase = base;
}

// The Deconstr
Number::~Number()
{
    if (this->Value != nullptr)
        free(this->Value);
}

// The Private Funcs
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
        default:
        return -1;
    }
}

char* Number::Convert10(char* number)
{

}

bool Number::CheckBasetoNumber(const char* value, int base)
{
    int lengh = strlen(value);
    for (int i = 0; i < lengh; i++)
    {
        if (ConvertChar(value[i]) == base)
        {
            return true;
        }
    }
}

// The Public Funcs
void Number::SwitchBase(int newBase)
{
    
}

void Number::Print() const
{
    printf("%s\n", this->Value);
}

int Number::GetDigitsCount() const
{
    return this->digitNumber;
}

int Number::GetBase() const
{
    return this->numberBase;
}


