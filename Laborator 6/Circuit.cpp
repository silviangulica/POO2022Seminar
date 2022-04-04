#include "Circuit.h"

Circuit::Circuit()
{
    this->Length = 1000;
}

void Circuit::AddCar(Car* car)
{
    this->initial_race.push_back(car);
}

void Circuit::ShowInitialRaceParticipants()
{
    for(int i = 0; i < initial_race.size(); ++i)
    {
        initial_race[i]->ShowCar();
    }
}

void Circuit::Race()
{
    for(int i = 0; i < initial_race.size(); ++i)
    {
        // Check if the car could not finish the race
        if ( ((initial_race[i]->GetConsumption() / 100) * Length) <= initial_race[i]->GetCapacity())
        {
            final_results.push_back(initial_race[i]);  
        }else
        {
            not_finished.push_back(initial_race[i]);
        }
    }
}

bool CompareSpeed(Car* v1, Car* v2)
{
    return (v1->GetSpeedCar() > v2->GetSpeedCar());
}

void Circuit::ShowFinalRanks()
{
    if (final_results.size() == 0)
    {
        printf("\nNo car has finished the race.\n");
        return;
    }
    sort(final_results.begin(), final_results.end(), CompareSpeed);
    printf("\n! Did  finished !\n");
    for(int i = 0; i < final_results.size(); ++i)
    {
        printf("%d", i+1);
        final_results[i]->ShowCar();
    }
}

void Circuit::ShowWhoDidNotFinish()
{
    if (not_finished.size() == 0)
    {
        printf("\nEvery car finished the race!\n");
        return;
    }
    printf("\n! Did not finished !\n");
    for(int i = 0; i < not_finished.size(); ++i)
    {
        not_finished[i]->ShowCar();
    }
}

void Circuit::SetLength(int length)
{
    this->Length = length;
}

void Circuit::SetWeather(Weather weather)
{
    for(int i = 0; i < initial_race.size(); ++i)
    {
        initial_race[i]->ApplyWeather(weather);
    }
}