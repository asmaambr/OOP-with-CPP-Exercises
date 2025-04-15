#ifndef FRESH_H
#define FRESH_H
using namespace std;
#include <iostream>
#include"product.h"

class freshfood : public product
{
    float price;
    float weight;
    public:
    virtual ~freshfood();
    freshfood(int long =0, string ="fresh food ", float =0, float=0);
    //virtual void setprice (float p) override;
    void setweight (float w);
    
     float getprice ();
    float getweight ();

    virtual void printer () override;
    virtual void scanner () override;
};

#endif