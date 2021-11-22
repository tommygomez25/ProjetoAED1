#include "Passenger.h"
#include "Flight.h"

Passenger::Passenger(string firstName, string lastName, Bag bag, Seat seat) {
    this->firstName=firstName;
    this->lastName = lastName;
    this->bag = bag;
    this->seat= seat;
}

