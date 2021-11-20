#ifndef CLIONPROJECTS_PLANE_H
#define CLIONPROJECTS_PLANE_H
#include <queue>
#include <vector>
#include <list>

using namespace std;

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

    string getPlate() return plate;
    void setPlate(string plate) this.plate = plate;
    string getType() return type;
    void setType(string type) this.type = type;
    int getCapacity() return capacity;
    void setCapacity(int capacity) this.capacity = capacity;
    List<Flight> getFlights() return flights;
    void setFlights(List<Flight> flight) this.flight = flight;
    void addFlight(Flight flight) this.flights.
    queue<Services> getPlaneServices() return planetServices;

private:
    string plate;
    string type;
    int capacity;
    List<Flight> flights;
    queue<Service> planeServices;
    vector<Service> pastServices;
};


#endif //CLIONPROJECTS_PLANE_H
