#pragma once
#include "Car.h"


//	
// This object is related to the Mazda Car model.
//
class Mazda : public Car
{
public:
	Mazda();
	Mazda(Weather weather, int capacity, int consumption);

public:
	// Apply the weather to the car conditions
	void ApplyWeather(Weather weather);

	// Set the average speed of Dacia Model
	void SetAverageSpeed(double speed);

	// Set the Fuel Tank Capacity.
	void SetFuelCapacity(double capacity);

	// Set the Fuel Consumption.
	void SetFuelConsumption(double consumption);
	
	// The speed will be increased/decreased.
	void ModifySpeed(double modified_speed);

	// Get the tank capacity.
	double GetCapacity();

	// Get the car fuel consumption.
	double GetConsumption();

	// Get the speed of the car
	double GetSpeedCar();

	// Show the car
	void ShowCar();
};

