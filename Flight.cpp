#include "Flight.h"

Flight::Flight(int number,Date depDate,int flightTime,string destiny,string origin,int numPassengers){
    this.number = number;
    this.depDate = depDate;
    this.flightTime = flightTime;
    this.destiny = destiny;
    this.origin = origin;
    this.numPassengers = numPassengers;
}
int Flight::getNumber() return number;

void Flight::setNumber(int number) this.number = number;

Date Flight::getDate() return date;

void Flight::setDate(Date date) this.date = date;

int Flight::getFlightTime() return flightTime;

void Flight::setFlightTime(int flightTime) this.flightTime = flightTime;

string Flight::getDestiny() return destiny;

void Flight::setDestiny(string destiny) this.destiny = destiny;

string Flight::getOrigin() return origin;

void Flight::setOrigin(string origin) this.origin = origin;

int Flight::getNumPassengers() return numPassengers;

void Flight::setNumPassengers(int numPassengers) this.numPassengers = numPassengers;



