#pragma once
#include <vector>
#include <algorithm>
#include "Car.h"

class Circuit final
{
    private: 
        std::vector<Car*> initial_race;
        std::vector<Car*> final_results;
        std::vector<Car*> not_finished;
        int Length;

    public:
        Circuit();
        void SetWeather(Weather weather);
        void AddCar(Car* car);
        void ShowInitialRaceParticipants();
        void Race();
        void SetLength(int length);
        void ShowWhoDidNotFinish();
        void ShowFinalRanks();
};

