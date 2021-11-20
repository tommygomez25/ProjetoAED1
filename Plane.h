//
// Created by maysa on 18/11/2021.
//

#ifndef CLIONPROJECTS_PLANE_H
#define CLIONPROJECTS_PLANE_H


class Plane {
    string getPlate();
    void setPlate(string plate);
    string getType();
    void setType(string type);
    int getCapacity();
    void setCapacity(int capacity);
    List<Flight> getFlights();
    void setFlights(List<Flight> flight);
    void addFlight(Flight flight);
private:
    string plate;
    string type;
    int capacity;
    List<Flight> flights;
};


#endif //CLIONPROJECTS_PLANE_H
