#include "Passenger.h"
#include "Flight.h"

Passenger::Passenger(string firstName, string lastName, vector<Bag> bag, Seat seat) {
    this->firstName=firstName;
    this->lastName = lastName;
    this->bag = bag;
    this->seat= seat;
}

const int Passenger::getBag() const {return bag;}
void Passenger::setBag(vector<Bag> bag) {this->bag = bag;}

const int Passenger::getFirstName() const {return firstName;}
void Passenger::setFirstName(string firstName) {this->firstName = firstName;}

const int Passenger::getLastName() const {return lastName;}
void Passenger::setLastName(string lastName) {this->lastName=lastName;}

const int Passenger::getSeat() const {return seat;}
void Passenger::setSeat(char row, int seat) {this->row = row; this->seat = seat;}