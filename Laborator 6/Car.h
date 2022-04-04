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

public:
	virtual void ApplyWeather(Weather weather) = 0;
	virtual void SetAverageSpeed(double speed) = 0;
	virtual void SetFuelCapacity(double capacity) = 0;
	virtual void SetFuelConsumption(double consumption) = 0;
	virtual void ModifySpeed(double modified_speed) = 0;
	virtual double GetCapacity() = 0;
	virtual double GetConsumption() = 0;
	virtual double GetSpeedCar() = 0;
	virtual void ShowCar() = 0;
};