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
    queue<Services> getPlaneServices();

private:
    string plate;
    string type;
    int capacity;
    List<Flight> flights;
    queue<Service> planeServices;
    vector<Service> pastServices;
};


#endif //CLIONPROJECTS_PLANE_H
