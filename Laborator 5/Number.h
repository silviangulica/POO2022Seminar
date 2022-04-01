#include <stdlib.h>
#include <cstring>
#include <cstdio>
class Number
{   
private:
    int digitNumber;
    int numberBase;
    int numberValuein10;
    void ConvertAnyBase(char* value, int base);
    int ConvertChar(char Char);
    int Convert10(char* number);
    bool CheckBasetoNumber(const char* value, int base);

public:
    Number(char* value, int base);
    ~Number();

    void SwitchBase(int newBase);
    void Print() const;

    int GetDigitsCount() const;
    int GetBase() const;
};
