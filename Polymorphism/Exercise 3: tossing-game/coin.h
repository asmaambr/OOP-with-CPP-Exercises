#ifndef COIN_H
#define COIN_H
using namespace std;
#include <iostream>

class coin {
    public :
    virtual ~ coin();
    bool toss () const ; // head or tails// dosnt have to be virtual pure since they all have the same implemetantio
    virtual double getValue () const = 0;// we have it virtual so we don't have to do down casting
    
}; 
#endif