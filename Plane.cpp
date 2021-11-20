#include "Plane.h"
#include <list>

using namespace std;

Plane::Plane() {
    plate = "";
    type = "";
    capacity = 0;
}

Plane::Plane(string plate,string type,int capacity,list<Flight> flights, queue<Service> planeServices, vector<Service> pastServices){
    this->plate = plate;
    this->type = type;
    this->capacity = capacity;
    this->flights = flights;
    this->planeServices = planeServices;
    this->pastServices = pastServices;
}

const string Plane::getPlate(){return plate;}
void Plane::setPlate(const string &plate){this->plate = plate;}

const string Plane::getType(){return type;}
void Plane::setType(const string &type){this->type = type;}

const int Plane::getCapacity(){return capacity};
void Plane::setCapacity(const int &capacity){this->capacity = capacity;}

const List<Flight> Plane::getFlights(){return flights;}
void Plane::setFlights(const List<Flight> &flight){this->flight = flight;}
void Plane::addFlight(const Flight &flight){flights.push_back(flight);}

const queue<Services> Plane::getPlaneServices(){return planetServices;}
const queue<Services> Plane::getPastServices(){return pastServices;}
void Plane::setServices(const queue<Services> &services){this->planeServices = services;}
void Plane::addService(const Service &service){planeServices.push_back(service);}
void Plane::addPastService(const int &service) {pastServices.push_back(service);}


