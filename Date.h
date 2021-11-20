#ifndef UNTITLED_DATE_H
#define UNTITLED_DATE_H


class Date {
private:
    unsigned day;
    unsigned month;
    unsigned year;
    unsigned hours;
    unsigned minutes;
public:
    /**
     * Class constructor
     */
    Date();
    /**
     * Class constructor with parameters
     * @param day
     * @param month
     * @param year
     * @param hours
     * @param minutes
     */
    Date(int day,int month, int year, int hours,int minutes);
    /**
     * Copy constructor
     * @param date
     */
    Date(const Date &date);
    /**
     * Constructor from a string with the format dd/mm/yyyy hh:mm
     * @param date in format dd/mm/yyyy hh:mm
     */
    Date(const string &date);
    /**
     * gets year
     * @return year of the date
     */
    unsigned getYear();
    /**
     * gets month
     * @return month of the date
     */
    unsigned getMonth();
    /**
     * gets hours
     * @return hours of the date
     */
    unsigned getHours();
    /**
     * gets minutes
     * @return minutes of the date
     */
    unsigned getMinutes();
    /**
     * Compares the dates
     * @param d1
     * @param d2
     * @return boolean indicating if date 1 comes before date 2
     */
    friend bool operator<(const Date &d1, const Date &d2);

};


#endif //UNTITLED_DATE_H
