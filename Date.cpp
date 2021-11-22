#include "Date.h"
Date::Date(int day, int month, int year, int hours, int minutes) {
    this->day = day;
    this->month = month;
    this->year = year;
    this->hours = hours;
    this->minutes = minutes;
}

Date::Date(const Date &date){
    day = date.getDay();
    month = date.getMonth();
    year = date.getYear();
    hours = date.getHours();
    minutes = date.getMinutes();
}

Date::Date(const std::string &date){
    istringstream ss{date};
    unsigned dia, mes, ano, horas, minutos;
    char separator;
    vector<unsigned> months {31,28,31,30,31,30,31,31,30,31,30,31};
    if(date.length() > 10){
        ss >> dia >> separator >> mes >> separator >> ano >> horas >> separator >> minutos;
        if ( ( ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0 )
            months[1] = 29;
        if (mes > 12 || dia > months[mes - 1] || horas > 23 || minutos > 59) {
            throw InvalidDate(date);
        }
    }
    else if (date.length() <= 10 && date.length() > 7){
        ss >> dia >> separator >> mes >> separator >> ano;
        if ( ( ano % 4 == 0 && ano % 100 != 0 ) || ano % 400 == 0 )
            months[1] = 29;
        if (mes > 12 || dia > months[mes - 1])
            throw InvalidDate(date);
        horas = 0;
        minutos = 0;
    }
    else{
        throw InvalidDate(date);
    }
    ss.ignore(100, '\n');
    ss.clear();
    day = dia;
    month = mes;
    year = ano;
    hours = horas;
    minutes = minutos;
}

unsigned Date::getYear() const {
    return year;
}

unsigned Date::getMonth() const {
    return month;
}

unsigned Date::getDay() const {
    return day;
}

unsigned Date::getHours() const {
    return hours;
}

unsigned Date::getMinutes() const {
    return minutes;
}

bool operator<(const Date &d1, const Date &d2){
    int total_mins_1, total_mins_2;
    if (d1.getYear() == d2.getYear()){
        if (d1.getMonth() == d2.getMonth()){
            total_mins_1 = d1.getDay() * 1440 + d1.getHours() * 60 + d1.getMinutes();
            total_mins_2 = d2.getDay() * 1400 + d2.getHours() * 60 + d2.getMinutes();
            return total_mins_1 < total_mins_2;
        }
        return d1.getMonth() < d2.getMonth();
    }
    return d1.getYear() < d2.getYear();
}