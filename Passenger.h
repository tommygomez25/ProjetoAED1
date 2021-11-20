//
// Created by maysa on 18/11/2021.
//

#ifndef CLIONPROJECTS_PASSENGER_H
#define CLIONPROJECTS_PASSENGER_H


class Passenger {
    Passenger(Luggage luggage){
        this->luggage = luggage;
    }
    Passenger(){
        this->luggage = null;
    }
    bool buyTicket(Flight flight, Passenger passenger);
    bool buyTicket(Flight flight, vector<Luggage> luggage,unsigned numPeople);

private:
    Luggage luggage;
};


#endif //CLIONPROJECTS_PASSENGER_H
