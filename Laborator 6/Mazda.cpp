#include "Mazda.h"

//
// Default Constructor is used for initialization.
//
Mazda::Mazda()
{
    SetAverageSpeed(230);
    SetFuelCapacity(26);
    SetFuelConsumption(3.1);
}


Mazda::Mazda(Weather weather, int capacity, int consumption)
{
    SetAverageSpeed(230);
    SetFuelCapacity(capacity);
    SetFuelConsumption(consumption);
    ApplyWeather(weather);
}

void Mazda::ApplyWeather(Weather weather)
{

  switch(weather)
  {
    case Rain:
      SetAverageSpeed(205);
      SetFuelConsumption(3.4);
    break;
    
    case Snow:
      SetAverageSpeed(160);
      SetFuelConsumption(6.5);
    break;
  }

}

void Mazda::SetAverageSpeed(double speed)
{
  srand(time(NULL));
  this->average_speed = rand() % 60 + speed;
}

void Mazda::SetFuelConsumption(double consumption)
{
  srand(time(NULL));
  this->fuel_consumption = (rand() % 20 + consumption * 10) / 10;
}

void Mazda::SetFuelCapacity(double capacity)
{
  srand(time(NULL));
  this->fuel_capacity = rand() % 20 + (capacity - 5);
}

void Mazda::ModifySpeed(double modified_speed)
{
  this->average_speed = modified_speed;
}

double Mazda::GetCapacity() 
{
  return this->fuel_capacity;
}

double Mazda::GetConsumption() 
{
  return this->fuel_consumption;
}

double Mazda::GetSpeedCar()  
{
  return this->average_speed;
} 

void Mazda::ShowCar()
{
  printf("\n");
  printf("Mazda: ");
  printf("Viteza: %.2f ", this->GetSpeedCar());
  printf("Consum: %.2f ", this->GetConsumption());
  printf("Rezervor: %.0f \n", this->GetCapacity());
}
