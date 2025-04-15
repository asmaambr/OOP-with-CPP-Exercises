#ifndef COIN50_H
#define COIN50_H
using namespace std;
#include <iostream>
#include "coin.h"
class coin50 : public coin {
    
    public :
    
    virtual double getValue () const override;
    
};
#endif