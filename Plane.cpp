#include "Plane.h"

Plane::Plane():Plane(0,0,"brand",0){};

Plane::Plane(int number_of_seats, int speed, char *brand, int flight_hours)
{
    if (number_of_seats>=0){this->number_of_seats = number_of_seats;}
    if (speed>=0){this->speed = speed;}
    delete[] this->brand;
    int len = strlen(brand)+1;
    this ->brand = new char [len];
    strcpy(this->brand, brand);
    if (flight_hours>=0){this->flight_hours = flight_hours;}
}

Plane::~Plane()
{
    delete [] brand;
}

Plane::Plane(Plane &pl):Plane(pl.number_of_seats,pl.speed,pl.brand,pl.flight_hours){}

void Plane:: print()
{
    std::cout<<"number_of_seats - "<< number_of_seats <<", ";
    std::cout<<"speed - "<< speed <<", ";
    std::cout<<"brand - "<< brand <<",";
    std::cout<<"flight_hours - "<< flight_hours <<"\n ";
}
