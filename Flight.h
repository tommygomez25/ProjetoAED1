//
// Created by maysa on 18/11/2021.
//

#ifndef CLIONPROJECTS_FLIGHT_H
#define CLIONPROJECTS_FLIGHT_H


class Flight {
    /**
     * Class constructor
     */
    Flight(){};
    /**
     * Class constructor with parameters
     * @param number
     * @param depDate
     * @param flightTime
     * @param destination
     * @param origin
     * @param numPassengers
     */
    Flight(int number,Date depDate,int flightTime,string destination,string origin,int numPassengers);
    /**
     * gets number
     * @return flight number
     */
    int getNumber();
    void setNumber(int number);
    /**
     * gets date
     * @return date
     */
    Date getDate();
    void setDate(Date date);
    /**
     * gets flightTime
     * @return flight duration
     */
    int getFlightTime();
    void setFlightTime(int flightTime);
    /**
     * gets destination
     * @return flight destination
     */
    string getDestination();
    void setDestination(string destination);
    /**
     * gets origin
     * @return flight origin
     */
    string getOrigin();
    void setOrigin(string origin);
    /**
     * gets numPassengers
     * @return number of passengers in the flight
     */
    int getNumPassengers();
    void setNumPassengers(int numPassengers);
    Plane getPlane();
    void setPlane(Plane plane);
    void addPassenger(Passenger passenger);
    void addLuggage(Luggage luggage);
private:
    int number;
    Date depDate;
    int flightTime;
    string destination;
    string origin;
    int numPassengers;
    Plane plane;
    List<Luggage> luggages;
    //List<Passenger> passengers;
};


#endif //CLIONPROJECTS_FLIGHT_H
