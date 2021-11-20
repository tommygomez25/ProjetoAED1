//
// Created by maysa on 18/11/2021.
//

#ifndef CLIONPROJECTS_PASSENGER_H
#define CLIONPROJECTS_PASSENGER_H


class Passenger {
    bool buyTicket(Flight flight, Luggage luggage);
    bool buyTicket(Flight flight);
    bool buyTicket(Flight flight, vector<Luggage> luggage,unsigned numPeople);
private:
    Luggage luggage;
};


#endif //CLIONPROJECTS_PASSENGER_H
