#ifndef COIN10_H
#define COIN10_H
using namespace std;
#include <iostream>
#include "coin.h"
class coin10 :public coin{
    public :
    virtual double getValue () const override;
}; 
#endif