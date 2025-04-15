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
    freshfood(int long =0, string ="fresh food ", float =0, float=0);
    void setprice (float p);
    void setweight (float w);
    float getprice ();
    float getweight ();

    void printer ();
    void scanner ();
};

#endif