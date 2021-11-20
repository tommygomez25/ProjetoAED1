//
// Created by maysa on 18/11/2021.
//

#ifndef CLIONPROJECTS_PLANE_H
#define CLIONPROJECTS_PLANE_H


class Plane {
    string getPlate() return plate;
    void setPlate(string plate) this.plate = plate;
    string getType() return type;
    void setType(string type) this.type = type;
    int getcapacity() return capacity;
    void setCapacity(int capacity) this.capacity = capacity;
    List<Flight> getFlights() return flights;
    void setFlights(List<Flight> flight) this.flight = flight;
private:
    string plate;
    string type;
    int capacity;
    List<Flight> flights;
};


#endif //CLIONPROJECTS_PLANE_H
