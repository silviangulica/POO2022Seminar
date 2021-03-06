#include "Dacia.h"

//
// Default Constructor is used for initialization.
//
Dacia::Dacia()
{
    SetAverageSpeed(200);
    SetFuelCapacity(20);
    SetFuelConsumption(3.9);
}


Dacia::Dacia(Weather weather, int capacity, int consumption)
{
    SetAverageSpeed(200);
    SetFuelCapacity(capacity);
    SetFuelConsumption(consumption);
    ApplyWeather(weather);
}

void Dacia::ApplyWeather(Weather weather)
{

  switch(weather)
  {
    case Rain:
      SetAverageSpeed(180);
      SetFuelConsumption(5);
    break;
    
    case Snow:
      SetAverageSpeed(150);
      SetFuelConsumption(6.5);
    break;
  }

}

void Dacia::SetAverageSpeed(double speed)
{
  srand(time(NULL));
  this->average_speed = rand() % 60 + speed;
}

void Dacia::SetFuelConsumption(double consumption)
{
  srand(time(NULL));
  this->fuel_consumption = (rand() % 20 + consumption * 10) / 10;
}

void Dacia::SetFuelCapacity(double capacity)
{
  srand(time(NULL));
  this->fuel_capacity = rand() % 20 + (capacity - 5);
}

void Dacia::ModifySpeed(double modified_speed)
{
  this->average_speed = modified_speed;
}

double Dacia::GetCapacity() 
{
  return this->fuel_capacity;
}

double Dacia::GetConsumption() 
{
  return this->fuel_consumption;
}

double Dacia::GetSpeedCar()  
{
  return this->average_speed;
} 

void Dacia::ShowCar()
{
  printf("\n");
  printf("Dacia: ");
  printf("Viteza: %.2f ", this->GetSpeedCar());
  printf("Consum: %.2f ", this->GetConsumption());
  printf("Rezervor: %.0f \n", this->GetCapacity());
}
