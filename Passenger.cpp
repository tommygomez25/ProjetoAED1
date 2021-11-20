#include "Passenger.h"
#include "Flight.h"

bool Passenger::buyTicket(Flight flight, Passenger passenger){
    Plane p1 = flight.getPlane();
    if (flight.getNumPassengers() < p1.getCapacity()){
        flight.setNumPassengers(flight.getNumPassengers() +1 );
        if(passenger.hasLuggage()){
            flight.addLuggage(passenger.getLuggage());}
        return true;
    }
    return false;
}