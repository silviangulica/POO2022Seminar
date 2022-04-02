#include <stdlib.h>
#include <stdio.h>
#include "Dacia.h"

int main()
{
    Dacia Dacia1;
    printf("Model Dacia: Viteaza: %f Fuel %f Tank %f", Dacia1.GetSpeedCar(), Dacia1.GetConsumption(), Dacia1.GetCapacity());
    return 0;
}