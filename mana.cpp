//
// Created by Alvin J on 1/29/21.
//
#include <iostream>
#include "mana.h"

// base class constructor
mana::mana(int mPts){
    // invariant: must be between 1 and 500
    if (mPts < 1 || mPts > 500){
        mPts = 500; // set default mana
    }
    this->manaPts = mPts;
    this->numPtr = &this->manaPts;
}
// shallow copy
manaShallow::manaShallow(int manaPts, const manaShallow &s) : mana(manaPts) {
    this->manaPts = s.manaPts;
    this->numPtr = s.numPtr;
}

// deep copy
manaDeep::manaDeep(int manaPts, const manaDeep &m) : mana(manaPts) {
    this->manaPts = m.manaPts;
    this->numPtr = &this->manaPts;
}

void mana::showValues() {
    std::cout << "manaPoints: " << this->manaPts << std::endl;
    std::cout << "ptr: " << this->numPtr << std::endl;
    std::cout << "address: " << &this->manaPts << std::endl;
}

// checks for similar memory address
bool mana::operator== (mana const& m){
    return(&this->manaPts == m.numPtr);
}