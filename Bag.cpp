//
// Created by jffma on 20/11/2021.
//

#include "Bag.h"
Bag::Bag() {
    this->weight = 0;
}

Bag::Bag(float weight) {
    this->weight = weight;
}

int Bag::getWeight() {
    return weight;
}

void Bag::setWeight(float weight){
    this->weight = weight;
}