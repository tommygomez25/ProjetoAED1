//
// Created by maysa on 18/11/2021.
//

#include "Plane.h"

string Plane::getPlate() return plate;
void Plane::setPlate(string plate) this->plate = plate;
string Plane::getType() return type;
void Plane::setType(string type) this->type = type;
int Plane::getCapacity() return capacity;
void Plane::setCapacity(int capacity) this->capacity = capacity;
List<Flight> Plane::getFlights() return flights;
void Plane::setFlights(List<Flight> flight) this->flights = flight;
void Plane::addFlight(Flight flight) (this->flights).push_back(flight);