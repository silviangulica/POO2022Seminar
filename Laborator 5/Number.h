#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <cstring>

class Number
{   
private:
    int digitNumber;
    int numberBase;
    char* Value;

    int ConvertChar(char Char);
    char* Convert10(char* number);
    bool CheckBasetoNumber(const char* value, int base);

public:
    Number(const char* value, int base);
    ~Number();

    void SwitchBase(int newBase);
    void Print() const;

    int GetDigitsCount() const;
    int GetBase() const;
};