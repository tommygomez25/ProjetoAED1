#ifndef CLIONPROJECTS_PLANE_H
#define CLIONPROJECTS_PLANE_H
#include <queue>
#include <vector>
#include <list>
#include <string>

using namespace std;

class Plane {
    /**
     *
     * @param plate
     * @param type
     * @param capacity
     * @param flights
     * @param planeServices
     * @param pastServices
     */
    Plane(string plate,string type,int capacity,list<Flight> flights, queue<Service> planeServices, vector<Service> pastServices);
    /**
     *
     * @return
     */
    const string getPlate();
    void setPlate(const string &plate);
    const string getType();
    void setType(const string &type);
    const int getCapacity();
    void setCapacity(const int &capacity);
    const list<Flight> getFlights();
    void setFlights(const list<Flight> &flight);
    void addFlight(const Flight &flight);
    const queue<Services> getPlaneServices();
    const queue<Services> getPlaneServices();
    void setServices(const queue<Services> &services)
    void addService(const Service &service);
    void addPastService(const Service &service);

private:
    string plate;
    string type;
    int capacity;
    list<Flight> flights;
    queue<Service> planeServices;
    vector<Service> pastServices;
};


#endif //CLIONPROJECTS_PLANE_H
