#ifndef COIN20_H
#define COIN20_H
using namespace std;
#include <iostream>
#include "coin.h"
class coin20  : public coin{
   
    public :
    
    virtual double getValue () const override;
    
};
#endif