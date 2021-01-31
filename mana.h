//
// Created by Alvin J on 1/29/21.
//

#ifndef HW4_LIST_H
#define HW4_LIST_H

// mana points for MOBA characters
class mana{
protected:
    int manaPts;
    int * numPtr;
public:
    mana(int manaPts);  //constructor
    bool operator== (mana const & m); // "equal to" operator
    void showValues();
};

class manaShallow : public mana{
public:
    manaShallow(int manaPts) : mana(manaPts){}; // constructor
    manaShallow(int manaPts, const manaShallow &s); // copy constructor
};

class manaDeep : public mana{
public:
    manaDeep(int manaPts) : mana(manaPts){} // constructor
    manaDeep(int manaPts, const manaDeep &m);// copy constructor (deep)
};


#endif //HW4_LIST_H
