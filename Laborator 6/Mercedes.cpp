#include "Mercedes.h"

//
// Default Constructor is used for initialization.
//
Mercedes::Mercedes()
{
    SetAverageSpeed(250);
    SetFuelCapacity(20);
    SetFuelConsumption(3.5);
}


Mercedes::Mercedes(Weather weather, int capacity, int consumption)
{
    SetAverageSpeed(200);
    SetFuelCapacity(capacity);
    SetFuelConsumption(consumption);
    ApplyWeather(weather);
}

void Mercedes::ApplyWeather(Weather weather)
{

  switch(weather)
  {
    case Rain:
      SetAverageSpeed(220);
      SetFuelConsumption(4.1);
    break;
    
    case Snow:
      SetAverageSpeed(140);
      SetFuelConsumption(6.8);
    break;
  }

}

void Mercedes::SetAverageSpeed(double speed)
{
  srand(time(NULL));
  this->average_speed = rand() % 60 + speed;
}

void Mercedes::SetFuelConsumption(double consumption)
{
  srand(time(NULL));
  this->fuel_consumption = (rand() % 20 + consumption * 10) / 10;
}

void Mercedes::SetFuelCapacity(double capacity)
{
  srand(time(NULL));
  this->fuel_capacity = rand() % 20 + (capacity - 5);
}

void Mercedes::ModifySpeed(double modified_speed)
{
  this->average_speed = modified_speed;
}

double Mercedes::GetCapacity() 
{
  return this->fuel_capacity;
}

double Mercedes::GetConsumption() 
{
  return this->fuel_consumption;
}

double Mercedes::GetSpeedCar()  
{
  return this->average_speed;
} 

void Mercedes::ShowCar()
{
  printf("\n");
  printf("Mercedes: ");
  printf("Viteza: %.2f ", this->GetSpeedCar());
  printf("Consum: %.2f ", this->GetConsumption());
  printf("Rezervor: %.0f \n", this->GetCapacity());
}
