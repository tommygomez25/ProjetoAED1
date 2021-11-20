#include "Service.h"

Service::Service(int type = 0,Date date = Date(),string employee = "") {
    this->type = type;
    this->date = date;
    this->employee = employee;
}

const int Service::getType() {
    return type;
}

void Service::setType(int type) {
    this->type = type;
}

const Date Service::getDate() {
    return date;
}

void Service::setDate(int date) {
    this->date = date;
}

const string Service::getEmployee() {
    return employee;
}

void Service::setEmployee(int employee) {
    this->employee = employee;
}