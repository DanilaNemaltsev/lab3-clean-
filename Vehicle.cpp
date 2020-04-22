#include "Vehicle.h"

Vehicle::Vehicle():Vehicle(0,0){}

Vehicle::Vehicle(int number_of_seats, int speed)
{
   if (number_of_seats>0){this->number_of_seats = number_of_seats;}
   if (speed>0){this->speed = speed;}
}

Vehicle::Vehicle(Vehicle &v):Vehicle(v.number_of_seats,v.speed){}
Vehicle::~Vehicle(){}
