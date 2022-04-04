#include "Toyota.h"

//
// Default Constructor is used for initialization.
//
Toyota::Toyota()
{
    SetAverageSpeed(270);
    SetFuelCapacity(22);
    SetFuelConsumption(4.0);
}


Toyota::Toyota(Weather weather, int capacity, int consumption)
{
    SetAverageSpeed(270);
    SetFuelCapacity(capacity);
    SetFuelConsumption(consumption);
    ApplyWeather(weather);
}

void Toyota::ApplyWeather(Weather weather)
{

  switch(weather)
  {
    case Rain:
      SetAverageSpeed(200);
      SetFuelConsumption(5);
    break;
    
    case Snow:
      SetAverageSpeed(120);
      SetFuelConsumption(6.5);
    break;
  }

}

void Toyota::SetAverageSpeed(double speed)
{
  srand(time(NULL));
  this->average_speed = rand() % 60 + speed;
}

void Toyota::SetFuelConsumption(double consumption)
{
  srand(time(NULL));
  this->fuel_consumption = (rand() % 20 + consumption * 10) / 10;
}

void Toyota::SetFuelCapacity(double capacity)
{
  srand(time(NULL));
  this->fuel_capacity = rand() % 20 + (capacity - 5);
}

void Toyota::ModifySpeed(double modified_speed)
{
  this->average_speed = modified_speed;
}

double Toyota::GetCapacity() 
{
  return this->fuel_capacity;
}

double Toyota::GetConsumption() 
{
  return this->fuel_consumption;
}

double Toyota::GetSpeedCar()  
{
  return this->average_speed;
} 

void Toyota::ShowCar()
{
  printf("\n");
  printf("Toyota: ");
  printf("Viteza: %.2f ", this->GetSpeedCar());
  printf("Consum: %.2f ", this->GetConsumption());
  printf("Rezervor: %.0f \n", this->GetCapacity());
}
