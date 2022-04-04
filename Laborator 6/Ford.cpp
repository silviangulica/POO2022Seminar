#include "Ford.h"

//
// Default Constructor is used for initialization.
//
Ford::Ford()
{
    SetAverageSpeed(220);
    SetFuelCapacity(25);
    SetFuelConsumption(3.6);
}


Ford::Ford(Weather weather, int capacity, int consumption)
{
    SetAverageSpeed(220);
    SetFuelCapacity(capacity);
    SetFuelConsumption(consumption);
    ApplyWeather(weather);
}

void Ford::ApplyWeather(Weather weather)
{

  switch(weather)
  {
    case Rain:
      SetAverageSpeed(200);
      SetFuelConsumption(5.3);
    break;
    
    case Snow:
      SetAverageSpeed(180);
      SetFuelConsumption(6.9);
    break;
  }

}

void Ford::SetAverageSpeed(double speed)
{
  srand(time(NULL));
  this->average_speed = rand() % 60 + speed;
}

void Ford::SetFuelConsumption(double consumption)
{
  srand(time(NULL));
  this->fuel_consumption = (rand() % 20 + consumption * 10) / 10;
}

void Ford::SetFuelCapacity(double capacity)
{
  srand(time(NULL));
  this->fuel_capacity = rand() % 20 + (capacity - 5);
}

void Ford::ModifySpeed(double modified_speed)
{
  this->average_speed = modified_speed;
}

double Ford::GetCapacity() 
{
  return this->fuel_capacity;
}

double Ford::GetConsumption() 
{
  return this->fuel_consumption;
}

double Ford::GetSpeedCar()  
{
  return this->average_speed;
} 

void Ford::ShowCar()
{
  printf("\n");
  printf("Ford: ");
  printf("Viteza: %.2f ", this->GetSpeedCar());
  printf("Consum: %.2f ", this->GetConsumption());
  printf("Rezervor: %.0f \n", this->GetCapacity());
}
