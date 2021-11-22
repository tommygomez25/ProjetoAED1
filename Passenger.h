#ifndef CLIONPROJECTS_PASSENGER_H
#define CLIONPROJECTS_PASSENGER_H


class Passenger {
    /**
     * Class constructor when it is mentioned the luggage
     * @param Luggage luggage
     */
    Passenger(Luggage luggage){
        this->luggage = luggage;
    }

    /**
     * Class constrcutor with no luggage mentioned
     */
    Passenger(){
        this->luggage = null;
    }

    /**
     * Function that determines if a passenger can buy a ticket
     * @param flight flight that the passenger wants to buy a ticket for
     * @param passenger passenger
     * @return if the ticket was bought
     */
    bool buyTicket(Flight flight, Passenger passenger);

    /**
     * Function that determines if a passaenger can buy more than one ticket for the same flight
     * @param flight
     * @param luggage
     * @param numPeople
     * @return if the ticket was bought
     */
    bool buyTicket(Flight flight, vector<Luggage> luggage,unsigned numPeople);

private:
    Luggage luggage;
};


#endif //CLIONPROJECTS_PASSENGER_H
