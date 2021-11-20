//
// Created by maysa on 18/11/2021.
//

#include "Passenger.h"
#include "Flight.h"
bool Passenger::buyTicket(Flight flight, Luggage luggage){
    //se numPassengers do voo < capacity do aviao
    //casos que o passageiro tem bagagem
    Plane p1 = flight.getPlane();
    if (flight.getNumPassengers() < p1.getCapacity()){
        flight.setNumPassengers(flight.getNumPassengers() +1 );
        flight.addLuggage(luggage);
        return true;
    }
    return false;
}