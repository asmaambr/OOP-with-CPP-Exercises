#ifndef PREPACKED_H
#define PREPACKED_H
using namespace std;
#include <iostream>
#include "product.h"

class prepackedfood : public product
{
    private:
    
    float price;
    public:
    
    virtual ~ prepackedfood();
    prepackedfood (int long =0, string ="prepacked food", float =0);
    float getprice ();
    //virtual void setprice (float )override ;
    virtual void printer () override;
    virtual void scanner () override;

};

#endif