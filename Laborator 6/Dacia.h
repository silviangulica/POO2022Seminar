#pragma once
#include "Car.h"
#include "Weather.h"

//	
// This object is related to the Dacia Car model.
//
class Dacia : private Car
{
private:
	int position;
public:
	Dacia();
	Dacia(Weather weather, int capacity, int consumption);

	// Choose a weather, the speed will corespond to that.
	void SetAverageSpeed(Weather weather);

	// Set the Fuel Tank Capacity.
	void SetFuelCapacity(int capacity);

	// Set the Fuel Consumption.
	void SetFuelConsumption(int consumption);
	
	// The speed will be increased/decreased.
	void ModifySpeed(int modifier);

	// Get the tank capacity.
	void GetCapacity() const;

	// Get the car fuel consumption.
	void GetConsumption() const;
};

