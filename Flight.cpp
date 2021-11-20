//
// Created by maysa on 18/11/2021.
//

#include "Flight.h"
#include "Passenger.h"
#include "Luggage.h"

public Flight::Flight(int number,Date depDate,int flightTime,string destiny,string origin,int numPassengers){
    this->number = number;
    this->depDate = depDate;
    this->flightTime = flightTime;
    this->destiny = destiny;
    this->origin = origin;
    this->numPassengers = numPassengers;

Flight::Flight(int number,Date depDate,int flightTime,string destiny,string origin,int numPassengers){
    this.number = number;
    this.depDate = depDate;
    this.flightTime = flightTime;
    this.destiny = destiny;
    this.origin = origin;
    this.numPassengers = numPassengers;

}
int Flight::getNumber() return number;

void Flight::setNumber(int number) this->number = number;

Date Flight::getDate() return date;

void Flight::setDate(Date date) this->date = date;

int Flight::getFlightTime() return flightTime;

void Flight::setFlightTime(int flightTime) this->flightTime = flightTime;

string Flight::getDestiny() return destiny;

void Flight::setDestiny(string destiny) this->destiny = destiny;

string Flight::getOrigin() return origin;

void Flight::setOrigin(string origin) this->origin = origin;

int Flight::getNumPassengers() return numPassengers;

void Flight::setNumPassengers(int numPassengers) this->numPassengers = numPassengers;

Plane Flight::getPlane() return plane;

void Flight::setPlane(Plane plane) this->plane = plane;
/*
void Flight::addPassenger(Passenger passenger) {
    if(passenger.buyTicket(passenger))
        sdoinfnodfs;
    if(passenger.buyTicket(passenger, passenger.getLuggage()))
    passengers.push_back(passenger);
}*/
void Luggage::addLuggage(Luggage luggage){
    luggages.push_back(luggage);
};



