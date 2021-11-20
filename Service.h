//
// Created by maysa on 18/11/2021.
//

#ifndef CLIONPROJECTS_SERVICE_H
#define CLIONPROJECTS_SERVICE_H


class Service {
public:
    Service(int type,Date date, string employee);
    const int getType();
    void setType(int type);
    const Date getDate();
    void setDate(Date date);
    const string getEmployee();
    void setEmployee(string employee);
private:
    int type; //(1 = manutenção, 2 = limpeza)
    Date date;
    string employee;
};


#endif //CLIONPROJECTS_SERVICE_H
