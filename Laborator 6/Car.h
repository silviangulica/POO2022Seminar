#pragma once
#include "Weather.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//
// The class is Abstract. 
// Here you have the most important atributes of a car.
//
class Car
{
protected:
	double average_speed;
	double fuel_capacity;
	double fuel_consumption;


	virtual void SetAverageSpeed(Weather weather) = 0;
	virtual void SetFuelCapacity(int capacity) = 0;
	virtual void SetFuelConsumption(int consumption) = 0;
};