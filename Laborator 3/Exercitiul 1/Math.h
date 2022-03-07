#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <cstring>

class Math
{
public:
    static int Add(int, int);
    static int Add(int, int, int);
    static int Add(double, double);
    static int Add(double, double, double);
    static int Mul(int, int);
    static int Mul(int, int, int);
    static int Mul(double, double);
    static int Mul(double, double, double);
    static int Add(int count, ...); 
    static char* Add(const char*, const char*);
};

