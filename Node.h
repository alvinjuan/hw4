//
// Created by Alvin J on 1/30/21.
//

#ifndef HW4_NODE_H
#define HW4_NODE_H
#include "mana.h"

class Node {
private:
    Node *prev;
    Node *next;
    mana pts;
public:
    Node(); //default constructor
    virtual ~Node(); // destructor
    void insert(Node * head); // insert node in front of the list
    void remove();
    bool empty() const;
};

#endif //HW4_NODE_H
