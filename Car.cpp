#include "Car.h"

Car::Car():Car(0,0,"brand"){};

Car::Car(int number_of_seats, int speed, char *brand)
{
    if (number_of_seats>0){this->number_of_seats = number_of_seats;}
    if (speed>0){this->speed = speed;}
    delete[] this->brand;
    int len = strlen(brand)+1;
    this ->brand = new char [len];
    strcpy(this->brand, brand);
}

Car::~Car()
{
    delete [] brand;
}

Car::Car(Car &c):Car(c.number_of_seats,c.speed,c.brand){}
