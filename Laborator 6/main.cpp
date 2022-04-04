#include <stdlib.h>
#include <stdio.h>
#include "Weather.h"
#include "Dacia.h"
#include "Ford.h"
#include "Toyota.h"
#include "Mercedes.h"
#include "Mazda.h"
#include "Circuit.h"

int main()
{
    Circuit c;
    c.AddCar(new Dacia());
    c.AddCar(new Mazda());
    c.AddCar(new Mercedes());
    c.AddCar(new Toyota());
    c.AddCar(new Ford());
    c.SetWeather(Weather::Snow);
    //c.ShowInitialRaceParticipants();
    c.SetLength(150);
    c.Race();
    c.ShowWhoDidNotFinish();
    c.ShowFinalRanks();
    return 0;
}