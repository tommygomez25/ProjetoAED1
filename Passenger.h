#ifndef CLIONPROJECTS_PASSENGER_H
#define CLIONPROJECTS_PASSENGER_H


class Passenger {
    /**
     * Class constructor with parameters
     * @param Bag Bag
     */
    Passenger(string firstName, string lastName, Bag bag, Seat seat);

    /**
     * Class constrcutor with no parameters
     */
    Passenger();

    /**
     * Copy constructor
     * @param passenger original object
     */
    Passenger(Passenger & passenger);

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
     * @param Bag
     * @param numPeople
     * @return if the ticket was bought
     */
    bool buyTicket(Flight flight, vector<Bag> Bag,unsigned numPeople);
    /**
     *
     */
     
    bool hasBag();
private:
    string firstName;
    string lastName;
    Bag bag;
    Seat seat;
};


#endif //CLIONPROJECTS_PASSENGER_H
