#ifndef VEHICLE_H_INCLUDED
#define VEHICLE_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
using namespace std;

class Vehicle
{
  protected:
    int number_of_seats;
    int speed;
  public:
    Vehicle();
    Vehicle(int number_of_seats, int speed);
    Vehicle(Vehicle &v);
     ~Vehicle();
     virtual void print() =0;

};

#endif // VEHICLE_H_INCLUDED
