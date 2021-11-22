//
// Created by maysa on 22/11/2021.
//

#ifndef UNTITLED_SEAT_H
#define UNTITLED_SEAT_H


class Seat {
private:
    char row;
    int seat_num;
public:
    /**
     * Default constructor
     */
    Seat();

    /**
     * Constructor with parameters
     * @param row plane row
     * @param seat plane seat
     */
    Seat(char row, int seat_num);

    /**
     * Copy constructor
     * @param reference of the original object
     */
    Seat (const Seat & seat);

    /**
     * row getter
     * @return row
     */
    const char getRow() const;

    /**
     * seat number getter
     * @return seat number
     */
    const int getSeatNum() const;

    /**
     * set row letter
     * @param row letter
     */
     void setRow(char row);

     /**
      * set seat number
      * @param seat
      */
     void setSeatNum(int seat_num);
};


#endif //UNTITLED_SEAT_H
