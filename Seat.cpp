//
// Created by maysa on 22/11/2021.
//

#include "Seat.h"

Seat::Seat() {
    seat_num = 0;
    row = '0';
}

Seat::Seat(char row, int seat_num) {
    this->row = row;
    this->seat_num = seat_num;
}

const char Seat::getRow() const {
    return row;
}

const int Seat::getSeatNum() const {
    return seat_num;
}

void Seat::setRow(char row) {
    this->row = row;
}

void Seat::setSeatNum(int seat_num) {
    this->seat_num = seat_num;
}